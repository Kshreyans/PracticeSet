//https://www.hackerrank.com/challenges/making-anagrams/problem

#include<stdio.h>
#include<stdlib.h>

int makingAnagrams(char* s1, char* s2){
     int i,j;
   int b[26]={0},a[26]={0};
    
   for( i=0 ; s1[i]!='\0'; i++ ){
       a[s1[i]-'a']++;
   }

   for( i=0 ; s2[i]!='\0'; i++ ){
        b[s2[i]-'a']++;
   } 
            j=0;
            for(i=0; i<26; i++ ){
             
                if( a[i]!=b[i] ){
                    j=j+abs(a[i]-b[i]);    
                } 
                
             }
    
    return j;
}

int main() {
    char* s1 = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s1);
    char* s2 = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s2);
    int result = makingAnagrams(s1, s2);
    printf("%d\n", result);
    return 0;
}

