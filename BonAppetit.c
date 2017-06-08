//https://www.hackerrank.com/challenges/bon-appetit

#include<stdio.h>
#include<stdlib.h>

int bonAppetit(int n, int k, int b, int* ar) {
   
   int i,s=0;
   for(i=0; i<n; i++)
   { 
      if(i!=k)
      s=s+ar[i];
   }
  return s/2; 
}

int main() {
    int n; 
    int k;
     
    scanf("%i %i", &n, &k);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int b; 
    scanf("%i", &b);
    int result = bonAppetit(n, k, b, ar);
    
    if(result==b)
    printf("Bon Appetit");
    else
    printf("%d\n",b-result);
    return 0;
}
