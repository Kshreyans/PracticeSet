#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node{
        int x,
            y;
     double  r;
};

double cal_radius(int x,int y){

      double r;
               
       r=sqrt(pow(x,2)+pow(y,2));
  return r;      
}


void bubble_sort(struct node a[],int n){

     int i,j;   
     double k;
        for(i=0; i<(n-1); i++){
        
               for(j=0; j<(n-1-i); j++)
               {
                       if(a[j].r>a[j+1].r)
                       { k=a[j].r;
                         a[j].r=a[j+1].r;
                         a[j+1].r=k;
                       }                
               } 
        
        }

}

int main(){

        int n,i,k;
        scanf("%d",&n);
        scanf("%d",&k);
        
        struct node *a;
        a=(struct node *)malloc(sizeof(struct node)*n);
        for(i=0; i<n; i++){
            scanf("%d",&a[i].x);
               
        }
                
        for(i=0; i<n; i++){
            scanf("%d",&a[i].y);
            a[i].r=cal_radius(a[i].x,a[i].y);    
        }
   bubble_sort(a,n);
        
    double j=ceil(a[k-1].r);  
        
    printf("%d",(int)j);
   
  return 0;
}
