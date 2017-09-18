//https://www.hackerrank.com/challenges/flatland-space-stations/problem

#include<stdio.h>
#include<stdlib.h>


long int cal_distance(int a[],int n,long int prv,long int u){

        long int i,j,min,max,p[n];
         max=-2;
         for(i=0; i<n; i++)
           p[i]=0;
         
      p[0]=abs(prv);
      p[n-1]=abs(n-u-1);
    
      for(i=prv; i<=u; i++){
      
           
            if( i < prv )
               p[i]=abs(prv-i);
              else
            if(a[i]==1)
             { p[i]=0;
               prv=i;
             }
             else
             { 
                for(j=prv+1; j<=u && a[j]!=1; j++ );
                    
                   min=abs(prv-i); 
                    if(j<n && a[j]==1 )
                    {    
                          if(min > abs(j-i))
                            min=abs(j-i);
                    }
                    
                    p[i]=min;   
             }
             
             if( max<p[i] )
                max=p[i];
      }
      
        if(max<p[0])
          max=p[0];
        
       if(max<p[n-1])
          max=p[n-1];
         
    
      return max;   
}



int main(){

        int n,m,i;long int k=99999,p,u=0;
        
        scanf("%d%d",&n,&m);
      
       int a[n];
       
      for(i=0; i<n; i++)
           a[i]=0;
            
      for(i=0 ; i<m; i++ )
      {  scanf("%ld",&p);
         a[p]=1;
       
          if(k>p)
            k=p; 
         
         if(u<p)
           u=p;  
      }
          
       printf("%ld",cal_distance(a,n,k,u));     
      
    return 0;
}
