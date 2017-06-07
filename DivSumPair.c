//https://www.hackerrank.com/challenges/divisible-sum-pairs

#include<stdio.h>
#include<stdlib.h>

 int calc(int *a,int n,int k)
{
       int i,j,s,c=0;
       
       for(i=0; i<n-1; i++)
       {    s=0;    
           for(j=i+1; j<n; j++)
           { s=a[i]+a[j];
             
              if(s%k==0)
               {c++;
                printf("(%d,%d)         ",a[i],a[j]);
               }
           } 
       }
       
    return c;   
} 

int main() {
    int n; 
    int k; 
    scanf("%d %d", &n, &k);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    
    printf("%d",calc(a,n,k));
    return 0;
}

