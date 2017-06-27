//https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited

#include<stdio.h>
#include<stdlib.h>


 int EvalEnergy(int *c,int n,int k){
  int i=0,e=100;
  if(k>0) 
    do{ i=(i+k)%n; 
        if(c[i]==1)
         e=e-2;
         e--;
      }while(i!=0);
  
  return e;   
}
 int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    
    printf("%d",EvalEnergy(c,n,k));
    return 0;
}
