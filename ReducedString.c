//https://www.hackerrank.com/challenges/reduced-string/problem

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* super_reduced_string(char* s,int n){
   int i,j;
    
    for(i=0; i<n; i++){
        
        if(s[i]==s[i+1]){
            
            for(j=i; j<n-2; j++)
                s[j]=s[j+2];
            
            n=n-2; s[n]='\0'; i=i-2;
        }
    }
    return s;
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int size=strlen(s);
    char* result = super_reduced_string(s,size);
   
    if(s[0]=='\0')
     printf("Empty String\n");
    else
     printf("%s\n", result);
    
    return 0;
}

