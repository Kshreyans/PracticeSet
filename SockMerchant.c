//https://www.hackerrank.com/challenges/sock-merchant

#include<stdio.h>
#include<stdlib.h>

 struct socks{
  int val;
  int d;
 };
 
 
 int sockMerchant(int n,struct socks* ar) {
        
     int i,j,c=0;
     
     for(i=0; i<n-1; i++)
     {        
             if(ar[i].d==0)
                for(j=i+1; j<n; j++)
               {   if(ar[i].val==ar[j].val && ar[j].d==0)
                   {  c++;
                     ar[j].d=1; 
                     break;
                   }
               }   
     } 
    return c;   
}

 int main() {
    int n; 
    scanf("%i", &n);
    struct socks *ar = malloc(sizeof(struct socks) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i].val);
       ar[ar_i].d=0;
    }
    int result = sockMerchant(n, ar);
    printf("%d\n", result);
    return 0;
}
