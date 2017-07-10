//

#include<stdio.h>
#include<stdlib.h>

int first_element(int *a,int n,int k){

   int i,j,max,c,max_i;
       max=c=max_i=0;
  
    for(i=0; i<n; i++){
    c=0;
        for(j=0; j<n; j++){
              if((a[i]+a[j])%k!=0)      
                 c++;   
        }
          if(c>max)
          { max=c;max_i=a[i];
          }
    }
    
   return max_i;
}
 
 int LargestSet(int *a,int n,int k){
        
     int *s=NULL,c=1,i,j,f;   
     s=(int *)malloc(sizeof(int)*n);    
     s[0]=first_element(a,n,k);
  
     for(i=0; i<n ; i++){
        f=0;
       if(a[i]!=s[0])         
        {       for(j=0; j<c; j++)
                 { if((s[j]+a[i])%k==0)
                        f=1;
                 }
                if(f==0)
                s[c++]=a[i];
        }
      }  
   
    return c;
}
 
 
 
 
 int main(){
  
        int n,k,*a=NULL;
     scanf("%d%d",&n,&k);    
   
   a=(int *)malloc(sizeof(int)*n);
   
   for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
   printf("%d",LargestSet(a,n,k));
 return 0;
}
