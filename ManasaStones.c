//https://www.hackerrank.com/challenges/manasa-and-stones/problem

#include<stdio.h>
#include<stdlib.h>


int main() {

  int t,n,min,max;
    scanf("%d",&t);
    
    for(int i=0; i<t; i++){
        
        scanf("%d",&n); 
        int a=n-1,sum=0;
        scanf("%d%d",&min,&max);
        if(min>max)
        { sum=min;
          min=max;
          max=sum;
          sum=0;
        }
        
        if(min==max || a==0)
          printf("%d",min*a);
        else  
       {   for(int j=0; j<n; j++){
            sum=a*min+max*(n-1-a);
            a--;
            printf("%d ",sum);
          }
        } 
        
           printf("\n");
    }
    return 0;
}
