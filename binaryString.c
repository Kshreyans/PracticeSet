//https://www.hackerrank.com/challenges/beautiful-binary-string/problem

#include<stdio.h>
#include<stdlib.h>


int beautifulBinaryString(char* b) {
   int i,s=0;
    
    for( i=1; b[i+1]!='\0' ; i++ ){
        
        if( b[i]=='1'){
            if(b[i-1]=='0' && b[i+1]=='0')
            {    b[i+1]='1';
                 s++;
            }
        }
        
    }
    return s;
}

int main() {
    int n; 
    scanf("%i", &n);
    char* b = (char *)malloc(512000 * sizeof(char));
    scanf("%s", b);
    int result = beautifulBinaryString(b);
    printf("%d\n", result);
    return 0;
}

