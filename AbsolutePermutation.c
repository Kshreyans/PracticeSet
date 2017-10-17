//

#include<stdio.h>
#include<string.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long n; 
        long k,i; 
        scanf("%ld %ld",&n,&k);
        int b[n+1],f=0;
        bzero(b,n);
        if(k==0)
        {
                for(i=1; i<=n; i++)
                 printf("%ld ",i);
        }
        else
        { long l,r;
                for(i=1; i<=n; i++)
                {       
                      l=i-k;
                      r=i+k;
                      if(i>k && b[l-k]!=l)
                        b[i]=l;
                      else  
                        b[i]=r;
                    if(b[i]>n || b[i]<=0)
                     f=1;  
                
                }
                printf("done   i=%ld\n",i);
                if(f==0|| k!=0)
                  for(i=1; i<=n; i++)
                   printf("%d ",b[i]);
                  else
                     printf("-1"); 
        }
       // printf("++++++++ n=%d\n",n);
              
        printf("\n");
    }
    return 0;
}
