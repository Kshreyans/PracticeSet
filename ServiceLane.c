//https://www.hackerrank.com/challenges/service-lane/problem

#include<stdio.h>


int checklen(int width[],int i,int j){
    
    int k,s=9999;
    for(k=i; k<=j; k++){
        if(width[k]<s)
          s=width[k];  
    }
        
    
    return s;
}

int main(){
    int n; 
    int t; 
    scanf("%d %d",&n,&t);
    int width[n];
    for(int width_i = 0; width_i < n; width_i++){
       scanf("%d",&width[width_i]);
    }
    for(int a0 = 0; a0 < t; a0++){
        int i; 
        int j; 
        scanf("%d %d",&i,&j);
        
       printf("%d\n" ,checklen(width,i,j) );
    }
    return 0;
}

