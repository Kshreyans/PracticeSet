//https://www.hackerrank.com/challenges/two-strings/problem

#include <stdio.h>
#include <string.h>

char* twoStrings(char* s1, char* s2){
    
    int i,a[26]={0},b[26]={0};
    
    for(i=0 ; s1[i]!='\0' || s2[i]!='\0'; i++ ){
        
        if( s1[i]!='\0' )
            a[s1[i]-'a']++;
        
        if( s2[i]!='\0' )
            b[s2[i]-'a']++;
    }
    
    for( i=0; i<26; i++ ){
        printf("%d %c=====   %d    %d\n",i,'a'+i,a[i],b[i]) ;   
    }
    for( i=0; i<26; i++ ){
        
        if( a[i]!=0 && b[i]!=0 && ( a[i] >= b[i] || a[i]<=b[i] ) )
          { printf("%d \n",i+1);  return "YES";}
    }
    
    return "NO";
}

int main() {
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        char* s1 = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s1);
        char* s2 = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s2);
        int result_size;
        char* result = twoStrings(s1, s2);
        printf("%s\n", result);
    }
    return 0;
}

