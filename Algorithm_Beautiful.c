//                              Algorithm -1
//https://www.hackerrank.com/challenges/strange-advertising?h_r=next-challenge&h_v=zen

int main() {
    int i,n,total,p,cont;
      total=0;
      p=5;  
    scanf("%d",&n);
      
    for(i=1; i<=n; i++)
      { cont=p/2;
        total=total+cont;
        p=cont*3;
    }  
        
    printf("%d",total);
    return 0;
}


//                              Algorithm -2

// https://www.hackerrank.com/challenges/beautiful-days-at-the-movies


#include<stdio.h>



 int rev(int n)
{ int s=0,r;
  
   while(n!=0)
   { r=n%10;
     s=s*10+r;
     n=n/10;  
   }    
    return s;     
}     

int main() {
    int c=0,i,j,k;
    
    scanf("%d %d %d",&i,&j,&k);
    
    for( ; i<=j; i++)
    { if( ((rev(i)-i)%k)==0)
        c++;
    }  
    
    printf("%d",c);
    
    return 0;
}

