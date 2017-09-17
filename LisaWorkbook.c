#include <stdio.h>


int main() {
   int n,k;
   scanf("%d%d",&n,&k);
   
   int ch[n],i,j,p[3],c=0,r=0,t=0;
   
   for(i=0; i<n; i++)
   scanf("%d",&ch[i]);
     
    for(i=1; t<n; i++ ){
       
      for(j=0; j<k && r<ch[t]; j++){
            p[j]=++r;
            
            if(i==r)
             c++;
       }
          if(r==ch[t])
            { r=0; t++;} 
   }
    
    printf("%d\n",c);
     
    return 0;
}

