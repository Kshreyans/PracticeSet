//https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem

#include<stdio.h>
#include<stdlib.h>

char* isValid(char* s){
   
    int i,a[26]={0},f=1,max=-1,k;
    
    for(i=0; s[i]!='\0'; i++ ){
       k=s[i]-'a';
        a[k]++;
        
        if( a[k] > max )
            max=a[k];
    }
        printf("%d max\n",max);
            
    for( i=0; i<26; i++ ){
        
        if( a[i]!=0 && a[i]!= max ){
            
            if( f==1 ){
                
                if( a[i] == 1 )
                     f=0;
                else
                if( max-a[i] == 1 ){
                    max=a[i];f=0;
                }else
                   return "NO"; 
            }else
               return "NO"; 
        }
    }
    
    return "YES";
    
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
    char* result = isValid(s);
    printf("%s\n", result);
    return 0;
}
