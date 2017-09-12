//

#include<stdio.h>
#include<math.h>

void rev_array(int a[],int k){

     int i,j,temp;
     i=0;j=k;
        
      while( i<j ){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
         i++;j--;
      }
}



long int generateNum(int a[],int l,int r)
{       
       long int s;int i=l;
        s=0;
        while(i<=r)
        { s=s*10 +a[i];
          i++;
        }
        
    return s;    
}



int main(){

       long int p,q,num1,num2;
      unsigned long long int n;
       int a[30]={0};
       int k=0,r,c=0,mid,l;
       num1=num2=0;
        
        scanf("%ld%ld",&p,&q);
       
       for(long int i=p; i<=q; i++)
       {  
          k=0;
          n=(unsigned long long)i*i;
         // printf("%lld",n);
          while(n>0)
          { r=n%10;
            a[k++]=r;
            n=n/10;
          }
            k--;     
             rev_array(a,k);
          
           mid=k/2;
   
                 
         if(k%2==0)
           { num1=generateNum(a,0,mid-1);
             num2=generateNum(a,mid,k);
             
           }
           else
           { num1=generateNum(a,0,mid);
             num2=generateNum(a,mid+1,k);
           }         
       
                if( (num1+num2)==i )
                {c++; printf("%ld ",i);}
       }
       
       if(c==0)
       printf("INVALID RANGE"); 
      return 0;
}
