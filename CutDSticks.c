//https://www.hackerrank.com/challenges/cut-the-sticks

#include<stdio.h>
#include<stdlib.h>
 
 void sort(int *a,int n){

     int i,j,temp;
     
     for(i=0; i<n; i++){
        for(j=0; j<n-1-i; j++){
             if(a[j]<a[j+1])
             { temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
             }
         }
     
     }
} 
 
 void SticksCut(int arr[],int n){
   int min=arr[n-1],c=0,i;
   
 while(n!=0)
 {  c=0;
       for(i=0; i<n; i++)
         { 
           arr[i]=arr[i]-min;  
           if(arr[i]==0)
             c++;
         }
       n=n-c;min=arr[n-1];
     printf("%d\n",i);    
 }
}
 
 int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
       scanf("%d",&arr[i]);
    }
    sort(arr,n);
    SticksCut(arr,n);
    
    return 0;
}
