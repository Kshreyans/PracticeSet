#include<stdio.h>
#include<stdlib.h>


  int solve(int s_size, int* a, int d, int m){
    int i,j,sum=0,r=0;
    
    for(i=0; i<s_size; i++)
    {   sum=0;
            
            for(j=i; j<m+i; j++)
              sum=a[j]+sum;
                  
         if(sum==d)
         r++;   
    }
    return r;
  }

int main() {
    int n; 
    scanf("%d", &n);
    int *s = malloc(sizeof(int) * n);
    for(int s_i = 0; s_i < n; s_i++){
       scanf("%d",&s[s_i]);
    }
    int d; 
    int m; 
    scanf("%d %d", &d, &m);
    int result = solve(n, s, d, m);
    printf("%d\n", result);
    return 0;
}
