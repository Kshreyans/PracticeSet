//https://www.hackerrank.com/challenges/the-hurdle-race

#include<stdio.h>
#include<stdlib.h>


 int cal_beverages(int *h,int n,int k){
 
 int i,a=0;
 
    for(i=0; i<n; i++){
        if(!(h[i]<=k))
         { a=a+h[i]-k;
            k=h[i];
         }  
    }
    
 return a;
 }

int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *height = (int *)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
       scanf("%d",&height[i]);
    }
    printf("%d",cal_beverages(height,n,k));
    
    return 0;
}
