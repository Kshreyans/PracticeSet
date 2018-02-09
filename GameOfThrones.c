//https://www.hackerrank.com/challenges/game-of-thrones/problem

#include<stdio.h>
#include<string.h>

char* gameOfThrones(char* s){
    
    int i=0,a[26]={0},l,f=0;
    
    l=strlen(s);
    
    for(i=0; s[i]!='\0'; i++ ){
        a[s[i]-'a']++;
    }
    
    if( l%2!=0 )
        f=1;
    
    for( i=0; i<26; i++ )
    {   
        if( a[i]%2 != 0 )
        {
            if( f == 1 )
               f=0;
            else
               return "NO"; 
        }   
    }
    
    return "YES";
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
    char* result = gameOfThrones(s);
    printf("%s\n", result);
    return 0;
}

