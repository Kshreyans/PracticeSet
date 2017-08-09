//https://www.hackerrank.com/challenges/taum-and-bday/problem

#include<stdio.h>

void Cal_amount(long int b,long int w,long int x,long int y,long int z){

   long cost=0;
        if(x>y){
        
          cost=y*w;
          
          if( (y+z) < x)
           cost=cost + (y+z)*b;
          else
           cost=cost + x*b; 
         }
          else
        if( x < y){
        
        cost=x*b;
                
                if( (x+z) < y)
                  cost=cost + (x+z)*w;
                 else
                 cost=cost + y*w; 
        }
        if(x==y){
           cost=(b+w)*y;     
        }

   printf("%ld\n",cost);
}

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long b; 
        long w; 
        scanf("%ld %ld",&b,&w);
        long x; 
        long y; 
        long z; 
        scanf("%ld %ld %ld",&x,&y,&z);
        
        Cal_amount(b,w,x,y,z);
    }
    return 0;
}

