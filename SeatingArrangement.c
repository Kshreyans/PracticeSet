//www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seating-arrangement-1/

#include<stdio.h>

void find_oppositeSeat(){

   int s,i,k=0,j;
        
        scanf("%d",&s);
        
        if(s%12==0)
         j=(s/12)-1; 
        else
         j=(s/12);
         
        i=j*12 + 1;  
        
        k=s-i;
        printf("%d",i+11-k);
         
        switch(s%6){
        case 0:
        case 1:printf(" WS");break;
        
        case 2:
        case 5:printf(" MS");break;
        
        case 3:
        case 4:printf(" AS");break;
        }        
}


int main(){

        int n;
        scanf("%d",&n);                 //no. test cases

        int i;
        for(i=1; i<=n ; i++){
        
         find_oppositeSeat();
         printf("\n");
        }

 return 0;
}
