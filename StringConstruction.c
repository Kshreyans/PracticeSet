//https://www.hackerrank.com/challenges/string-construction/problem

#include<stdio.h>
#include<stdlib.h>

int stringConstruction(char* s) {
    
    int i,b[26]={0},c=0,k;
    
    for( i=0; s[i]!='\0'; i++ ){
          
        k=s[i]-'a';
        
        if( b[k] == 0 )
        { c++; b[k]++; }
    }
   return c; 
}

int main() {
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result = stringConstruction(s);
        printf("%d\n", result);
    }
    return 0;
}

