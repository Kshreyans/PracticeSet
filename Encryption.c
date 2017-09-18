//https://www.hackerrank.com/challenges/encryption/problem

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){

    double len,col=0;
    int i,j;
    
    char *a=NULL;
    a=(char *)malloc(sizeof(char)*100);

    scanf("%s",a);
    len=(double)strlen(a);
    col=ceil(sqrt(len));
    
    for( i=0; i<col; i++){
    
        for( j=i; j<len; j=j+col)
          printf("%c",a[j]);
    
      printf(" ");
    }
     return 0;
}
