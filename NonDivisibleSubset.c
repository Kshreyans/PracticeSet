//

#include<stdio.h>
#include<stdlib.h>

 int maximalSubset(int a[],int k){
        int c=0,v=k/2;
       
       if(k%2==0)
        { v--;
         if(a[k/2]>=1)
          c=c+1;
        }  
        
        if(a[0]>=1)
         c+=1;
            
        for(int i=1 ; i<= v ; i++){
                if(a[i]>a[k-i]) 
                  c=a[i]+c;
                 else
                  c=a[k-i]+c;          
        }
    return c;
}



 int main(){
  
        int n,k,*a=NULL;
        long int p;
     scanf("%d%d",&n,&k);    
   if(k==1)
   { printf("1"); return 0;}
   
   a=(int *)malloc(sizeof(int)*k);
   
   for(int i=0; i<k ; i++)
        a[i]=0;
      
    for(int i=0; i<n; i++){
       scanf("%ld",&p);
       a[p%k]++;                                                                
     }
     
     printf("%d",maximalSubset(a,k));
 return 0;
}
