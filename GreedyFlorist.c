//https://www.hackerrank.com/challenges/greedy-florist/problem

#include<stdio.h>
#include<stdlib.h>


void sort(int c[],int n){

   int i,j,temp;
   
   for( i=0; i<n; i++ ){
        for(j=0; j<n-1-i; j++){
        
                if( c[j] < c[j+1]){
                        temp=c[j];
                        c[j]=c[j+1];
                        c[j+1]=temp;
                }
        }
   }
}


int getMinimumCost(int n, int k, int* c){
        
      int i,z=0,*a=NULL,j;
      
      a=(int *)calloc(k,sizeof(int));
      j=0;
      
      sort(c,n);
      
      for( i=0; i<n; i++ ){
        z=z+(1+a[j])*c[i];
        
        a[j]++;
        j++;
      
        if( j>=k )
        j=j%k;
      }
    return z;    
}

int main() {
    int n; 
    int k; 
    scanf("%d %d", &n, &k);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    int minimumCost = getMinimumCost(n, k, c);
    printf("%d\n", minimumCost);
    return 0;
}
