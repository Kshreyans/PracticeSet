#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct node{
    int n,
        f;
    struct node *left,
                *right;
};

int  n;

void heapify(struct node *a[],int i){
    int l,r;
    l=2*(i+1)-1;
    r=2*(i+1);
    struct node *gr=a[i];

    if( l<n && gr->f > a[l]->f )
        gr=a[l];
    if( r<n && gr->f > a[r]->f )
        gr=a[r];

    if(gr!=a[i]){
        struct node *temp=a[i];
        a[i]=gr;

        if(gr==a[l]){ a[l]=temp; heapify(a,l);}
        if(gr==a[r]){ a[r]=temp; heapify(a,r);}
    }
}

struct node* ElementDelete(struct node *a[]){
       struct node *p=a[0];
       a[0]=a[n-1];
       a[n-1]=NULL;
       n--;
       heapify(a,0);

    return p;
}

void huffman(struct node *a[]){
    struct node *p1,*p2,*cur;

    while(n>1){
    p1=ElementDelete(a);
    p2=ElementDelete(a);
    cur=(struct node *)malloc(sizeof(struct node));
    cur->f=cur->n=p1->f+p2->f;
    cur->left=p1;
    cur->right=p2;
    a[n++]=cur;
    heapify(a,0);
    }
}
void PrintCode(struct node *root,int arr[],int top){
    if(root==NULL )
        return;
    else{
        if( root->left==NULL && root->right==NULL )
        {   printf("%d --- ",root->n);
            for(int i=0; i<top; i++){
            printf("%d",arr[i]);
            }
            printf("\n");
        }
        if( root->left!=NULL ) {
            arr[top] = 0;
            PrintCode(root->left, arr, top + 1);
        }
        if(root->right!=NULL ) {
            arr[top] = 1;
            PrintCode(root->right, arr, top + 1);
        }
     }
}

int main(){

    struct node **a=NULL,*cur;
    int arr[100]={-1};
    printf("Enter the no. of elemenets:");
    scanf("%d",&n);

    a=(struct node **)malloc(sizeof(struct node*)*(n+20));

    printf("Enter the elements name and frequency:");
    for(int i=0; i<n; i++ ){
        cur=(struct node *)malloc(sizeof(struct node));
        scanf("%d%d",&(cur->n),&(cur->f));
        cur->left=cur->right=NULL;
        a[i]=cur;
    }

    for(int i=(n-1)/2; i>=0; i-- )
        heapify(a,i);
    printf("domr\n");
    huffman(a);
    printf("____done\n");
    PrintCode(a[0],arr,0);

    printf("+++=====done\n");
    return 0;
}
