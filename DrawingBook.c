//

#include<stdio.h>

int solve(int n, int p){
   int i,c=0;
        if(p<n/2)
        {
              for(i=1; p>i; i=i+2)
                  c++;
        }
        else
        {  if(n%2!=0)
             n=n-1;
            
            for(i=n; p<i; i=i-2)
                  c++;
       }
       
   return c;    
}

int main() {
    int n; 
    scanf("%d", &n);
    int p; 
    scanf("%d", &p);
    int result = solve(n, p);
    printf("%d\n", result);
    return 0;
}

