// For Calculating Large No.s 

#include<stdio.h>


void multi(int a[],int b[],int n,int f){
        
        int c=0,z=19,k=0,i,l=0;
        
        while(n!=0){
                
              k=n%10;
              for( i=z; i>=0; i-- ){
              
                c=c+k*a[i];
                if( l==0 ){
                        b[i]=c%10;
                }else
                     {
                        b[i-l]=b[i-l]+c%10;
                        
                        if( b[i-l]/10 >= 1 )
                        { b[i-1-l]=b[i-1-l]+b[i-l]/10;
                          b[i-l]=b[i-l]%10;                        
                        }  
                     }
               
                   c=c/10; 
              }
          
            n=n/10; 
                
            while( c!=0 ){
                b[i--]=c%10;
                c=c/10;
            }
            l++;
                
        }
        
        for( i=0; i<20; i++ )
          a[i]=b[i];
}


int main(){
        int z=20,i;
        int a[20]={0},n,b[20]={0},f=0;
       long long int num;
        
        scanf("%lld %d",&num,&n);
        z--;
       long long int k=num,t=10;
      
                
        while(num!=0){
                                                                        //Extracting the number
            a[z--]=num%10;
            num=num/10;
            f++;    
        }
  /*                                                                    No. fetched right or Not    
        for(i=0; i<20; i++ )
        printf("%d ",a[i]);
        printf("\n");
   */    
        
        f=20-f;
        printf("f=%d\n",f);
        multi(a,b,n,f);
        
        for(i=0; i<20; i++ )
        printf("%d ",a[i]);
        printf("\n");
        
        return 0;
}
