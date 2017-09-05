//https://www.hackerrank.com/contests/codeagon/challenges/buying-everything

#include<stdio.h>
#include<stdlib.h>

int cal_cost(int *b,int i,int k,int m,int n){

        int j,cost,prv=i,c=1;
        cost=abs(i-0);

        for(j=i+1; j<n; j++)
        {
                if(b[j]==1)
                { cost=cost+abs(prv-j)*c*k;
                  c++;prv=j;              
                }
        
                if(c==m)
                 break;
        }
return cost;
}

void minimumTime(int n, int* b, int m, int k,int p) {
   int i,u=0,min=10000,r=0;
   
   for(i=1; (p-m-u)>=0 ; i++)
   {
        if(b[i]==1)
        { u++;
          r=cal_cost(b,i,k,m,n);
          
          if(r<min)
          min=r;
        }
   }
   printf("%d",min);
}

int main() {
    int n; 
    int m; 
    int k;
    int p=0;
     
    scanf("%i %i %i", &n, &m, &k);
    int *b = malloc(sizeof(int) * n);
    for (int b_i = 0; b_i < n; b_i++) {
       scanf("%i",&b[b_i]);
       if(b[b_i]==1)
       p++;
    }
   
    if(p<m)
     printf("-1\n");
    else 
     minimumTime(n,b, m, k,p);
    
    return 0;
}

