//https://www.hackerrank.com/challenges/chocolate-feast/problem

#include<stdio.h>

int main(){
    int t,q,w; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int c; 
        int m; 
        scanf("%d %d %d",&n,&c,&m);
        q=w=0;
        
        q=n/c;  w=q;
        while(w>=m){
           q=q+w/m;
           w= w%m + w/m;
        }
      printf("%d\n",q);      
    }
    return 0;
}

