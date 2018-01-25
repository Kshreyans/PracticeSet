//https://www.hackerrank.com/challenges/anagram/problem

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int anagram(char* s){
   int len,i,j;
   int b[26]={0},a[26]={0};
    
   len=strlen(s);
        
   if( len%2 != 0 )
     return -1;
    
   for( i=0,j=len/2 ; i< len/2; i++,j++ ){
        
       a[s[i]-'a']++;
       b[s[j]-'a']++;
   }
    
            j=0;
            for(i=0; i<26; i++ ){
                
                if( b[i] != 0 && b[i] > a[i])
                  j=j+abs(a[i]-b[i]);
             }
    
    return j;
}

int main() {
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result = anagram(s);
        printf("%d\n", result);
    }
    return 0;
}
