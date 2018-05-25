//
// Created by shreyanshu on 25/5/18.
//

#include <stdio.h>
#include <stdlib.h>

struct node {
    int w,
            p,
            c,
            n;
};

int hts;

void ComputePrims(int *adj[]);

int main() {
    int n, i,j;
    printf("Enter the no. of vertex:- ");
    scanf("%d",&n);

    int **adj = (int **) malloc(sizeof(int *) * n);
    for (i = 0; i < n; i++)
        adj[i] = (int *) malloc(sizeof(int) * n);

    printf("Enter the adjancency Matrix:- ");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; ++j)
            scanf("%d",&adj[i][j]);
    hts=n;
    ComputePrims(adj);

    return 0;
}

void heapify(struct node **q,int a[],int i) {
    int l,r,temp,gr=i;
    l=2*(gr+1)-1;
    r=2*(gr+1);

    if( l< hts && q[a[gr]]->w > q[a[l]]->w )
        gr=l;
    if( r< hts && q[a[gr]]->w > q[a[r]]->w )
        gr=r;

    if( gr!=i ) {
        temp=a[gr];
        a[gr]=a[i];
        a[i]=temp;
        heapify(q,a,gr);
    }
}

void buildHeap(struct node **q,int a[]){
    int i;

    for( i=(hts-1)/2; i>=1; i-- )
        heapify(q,a,i);

}

int ExtractMin(struct node **q,int a[]){
    int k=q[a[0]]->n,temp=a[hts-1];
     a[hts-1]=a[0];
     a[0]=temp;
     hts--;

    heapify(q,a,0); printf("a\n");
    return k;
}


//void decreasePriority(int x,struct node **q,int a[]){
//    int i=x/2,temp=a[x];
//
//    while( q[x]->w < q[i]->w) {
//        a[x]=a[i];
//        x=i;
//        i=x/2;
//    }
//    a[x]=temp;
//}

void printArr(int a[],struct node **q){
    int i,z;
    printf("name\t weight\t completion\t parent\t\n");
    for( i=0; i<5; i++ ){
        z=a[i];
        printf("%d\t%d\t%d\t\t%d\t\t%d\n",q[z]->n,q[z]->w,q[z]->c,q[z]->p,a[i]);
    }

}

void ComputePrims(int *adj[]) {

    int i,*a,k,x;
    struct node **q=(struct node **)malloc(sizeof(struct node *)*hts);
    struct node *cur;

    a=(int *)malloc(sizeof(int)*hts);

    for( i=0; i< hts; i++ ) {
        cur=(struct node *)malloc(sizeof(struct node));
        cur->n=i;
        cur->c=0;
        cur->p=-1;
        cur->w=9999;
        q[i]=cur;
        a[i]=i;
    }

    q[0]->w=0;
    //q[0]->c=1;
    printf("pre BuiltHeap\n");
    buildHeap(q,a);
    printf("done buildheap\n");
    while( hts >=1 ) {
        k=ExtractMin(q,a);
        printf("k=%d\n",k);printArr(a,q);

        for( i=0 ;i< hts; i++ ) {
            x=a[i];
            if(q[x]->c== 0 && adj[k][x] !=0 && adj[k][x] < q[x]->w ) {
                q[x]->w=adj[k][x];
                q[x]->p=k;
//                decreasePriority(x,q,a);
            }
        }
        heapify(q,a,0);
        q[k]->c=1;
        printf("__________________________");
        printArr(a,q);
    }
    printArr(a,q);
}

