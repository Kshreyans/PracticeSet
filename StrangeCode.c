//https://www.hackerrank.com/challenges/strange-code/problem

#include<stdio.h>

int main(){
    long t=1,q,v=3; 
    scanf("%ld",&q);
    
    while( (t+v)<= q){
        
        t=t+v;
        v=2*v;
    }
        
    printf("%ld", v-(q-t));
    return 0;
}

