//https://www.hackerrank.com/challenges/fair-rations/problem

#include<stdio.h>

int main(){
    int N; 
    scanf("%d",&N);
    int *B = malloc(sizeof(int) * N);
    for(int B_i = 0; B_i < N; B_i++){
       scanf("%d",&B[B_i]);
    }
    int c=0;
    
    for(int i=0; i<(N-1); i++){
        
        if(B[i]%2!=0){
            B[i]++;
            B[i+1]++;
            c=c+2;
        }
    }
    
      if(B[N-1]%2!=0)
        printf("NO");
       else
        printf("%d",c);   
        
        
    return 0;
}

