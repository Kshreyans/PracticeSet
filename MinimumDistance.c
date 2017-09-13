//https://www.hackerrank.com/challenges/minimum-distances

#include<stdio.h>
#include<stdlib.h>


int main(){
    int n; 
    scanf("%d",&n);
    int *a = malloc(sizeof(int) * n);
    
    int i,j,d=9999;
    
    for(i = 0; i < (n-1); i++){
       scanf("%d",&a[i]);
    }
    
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++){
            if(a[i]==a[j]){
                if(d>abs(j-i))
                   d=abs(j-i); 
            }
        }
    }
    
    if(d==9999)
      printf("-1");
    else
      printf("%d",d);
    
    return 0;
}

