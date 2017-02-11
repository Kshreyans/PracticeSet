#include<stdio.h>
#include<stdlib.h>


 int max(int c1,int c2)
{
  if(c1>c2)
    return c1;
  else
    return c2;  
 }     

int main(){
    int n,types_i; 
    int c[5];
        c[0]=c[1]=c[2]=c[3]=c[4]=0;
    scanf("%d",&n);
    int *types = malloc(sizeof(int) * n);
    for(types_i = 0; types_i < n; types_i++){
       scanf("%d",&types[types_i]);
        
       if(types[types_i]==1)
         c[0]++;
       else
       if(types[types_i]==2)
         c[1]++;  
       else
       if(types[types_i]==3)
         c[2]++;
       else
       if(types[types_i]==4)
         c[3]++;  
       else
         c[4]++;  
    }
      n=max(c[0],c[1]);
    for(types_i=2;types_i<=4;types_i++)
      n=max(n,c[types_i]);
       
     for(types_i=0;types_i<=4;types_i++)
       if(n==c[types_i])
       {     printf("%d",types_i+1);  
             break;
       } 
        return 0;
}
