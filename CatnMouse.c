//

#include<stdio.h>
#include<stdlib.h>
struct node{
 int x,
     y,
     z;
};

 void printans(struct node *a,int q){
      int i,s1,s2;
     
     for(i=0; i<q; i++)
     {  s1=abs(a[i].x-a[i].z);
        s2=abs(a[i].y-a[i].z);
        
        if(s1<s2)
          printf("Cat A"); 
      else 
        if(s1>s2)
          printf("Cat B");
        else
          printf("Mouse C");
         
        printf("\n");        
     }   
 }
 
int main(){
    int q,x,y; 
    scanf("%d",&q);
    
    struct node *a=(struct node*)malloc(sizeof(struct node)*q);
    
    for(int i = 0; i < q; i++){
      scanf("%d %d %d",&a[i].x,&a[i].y,&a[i].z);
    }
    
    printans(a,q);
    return 0;
}

