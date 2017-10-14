//

#include<stdio.h>

int main(){
    int t,i; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int k; 
        scanf("%d %d",&n,&k);
        
        if(k==0)
        {
                for(i=1; i<=n; i++)
                 printf("%d ",i);
        }
        else
        { int b[n+1],l,r;
                for(i=1; i<=n; i++)
                {       
                      l=i-k;
                      r=i+k;
                      if(i>k && b[l-2]!=l)
                        b[i]=l;
                      else  
                        b[i]=r;
                    printf("%d ",b[i]);    
                }
        }

        printf("\n");
    }
    return 0;
}
