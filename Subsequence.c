//https://www.hackerrank.com/contests/codeagon/challenges/subsequence-3

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void subsequenceAgain(char* s, int z) {

        int a[26]={0};
        int len=strlen(s); 
        int k,i;          
     
     for(i=0; i<len; i++)
       { k=s[i]-'a';
         a[k]++;
       }
       
       for(i=0; i<len; i++)
       { k=s[i]-'a';
         if(a[k]>=z)
         printf("%c",s[i]);
       }
         
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int k; 
    scanf("%i", &k);
  
    subsequenceAgain(s, k);
    
    return 0;
}

