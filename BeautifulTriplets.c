//

#include<stdio.h>

int search(int a[],int key,int l,int r){

        int mid;

      while(l<=r)
      { mid=(l+r)/2;
         
        if(key==a[mid])
         return mid; 
        else
         if(key<a[mid])
           r=mid-1; 
         else
           l=mid+1;
      }
  return 0;
}



int main(){
        
      int n,d;
      scanf("%d%d",&n,&d); 
      
      int a[n],i,s1,s2,c=0;
      
       for(i=0; i<n; i++)
        scanf("%d",&a[i]);

        for(i=0; i<(n-2); i++){
             s1=s2=-1;
          
           if(s1=search(a,a[i]+d,i+1,n-1))
           {    if( s2=search(a,a[i]+2*d,s1+1,n-1))
                c++;
           }
        }
        
       printf("%d\n",c);         
        
    return 0;
}
