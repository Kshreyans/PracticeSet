//https://www.hackerrank.com/challenges/jumping-on-the-clouds/

#include<stdio.h>
#include<stdlib.h>

int MinSteps(int *c,int n){
        int i,s=0;
        
        for(i=0; i<n-1;   ){
        
          if(c[i+2]!=1)
            i=i+2;
           else
            i++;
          s++;  
        
        }
      
   return s;
}

int main(){
    int n; 
    scanf("%d",&n);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    
    printf("%d",MinSteps(c,n));
    return 0;
}

