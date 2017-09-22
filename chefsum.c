//https://www.codechef.com/problems/CHEFSUM

#include<stdio.h>
#include<stdlib.h>

int main(){

        int n,t,j;        
        scanf("%d",&t);
       long int *a=NULL,total,
             prefix,
             suffix,
             min=9999999,
             c;
        
             
        for(int i=0; i<t; i++){
              total=0;
              min=99999999; 
              scanf("%d",&n); 
              a=(long *)malloc(sizeof(long)*n);  
        
              for(j=0; j<n; j++){
                scanf("%ld",&a[j]);
                total=total+a[j];
              }
              
                suffix=total;
                prefix=0;
              for(j=0; j<n; j++)
              { prefix=prefix+a[j];
               
                 if( (j-1)>=0 ) 
                  {suffix=suffix-a[j-1];
                  }
                  
                  if( (prefix+suffix) < min)
                  { c=j;
                    min=prefix+suffix;
                  }
                  
              }
              printf("%ld",(c+1));
        }
        
        return 0;
}
