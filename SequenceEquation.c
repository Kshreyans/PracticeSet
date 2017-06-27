//https://www.hackerrank.com/challenges/permutation-equation

#include<stdio.h>
#include<stdlib.h>

 int findPosition(int *a,int n,int key){
 
 int i;
        for(i=1; i<=n; i++){
            if(a[i]==key)        
              return i; 
        } 
}

 void findY(int *a,int n){
  int i,f;

  for(i=1; i<=n; i++){
    f=findPosition(a,n,i);
    printf("%d\n",findPosition(a,n,f));
  }
}

 int main(){
     int n,
         i,
        *a;
        scanf("%d",&n);
      a=(int *)malloc(sizeof(int)*(n+1));
      
    for(i=1; i<=n; i++)
       scanf("%d",&a[i]);
      
   findY(a,n);  
 return 0;
}
 
