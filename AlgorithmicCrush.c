//https://www.hackerrank.com/challenges/crush

#include<stdio.h>
#include<stdlib.h>
 
 void PerformQuery(int *arr){
      int q,i,a,b,k,j;
      scanf("%d",&q);
      
     for(i=0; i<q; i++){
         scanf("%d%d%d",&a,&b,&k);
         
                 for(j=a; j<=b; j++)
                   arr[j]=arr[j]+k;
     } 
}


 int evalMax(int *arr,int n){
     int i,max=arr[1];
   
   for(i=2; i<=n; i++)
       if(arr[i]>max)
        max=arr[i];
  return max;
}


 int main(){
     int *arr,n,i;
     scanf("%d",&n);
             arr=(int *)malloc(sizeof(int)*(n+1));
     
     for(i=1; i<=n; i++)
         arr[i]=0;
     PerformQuery(arr);
    
     printf("%d",evalMax(arr,n));      
 return 0;
}
