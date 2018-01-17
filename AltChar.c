//https://www.hackerrank.com/challenges/alternating-characters/problem

#include<stdio.h>
#include<stdlib.h>

int alternatingCharacters(char* s){
   int i,f,k=0;
    
    if( s[0] == 'A' )
      f=1;
    else
     if(s[0] == 'B' )
       f=2;  
    
    for( i=1; s[i]!='\0'; i++ ){
        
        if( (s[i]=='A' && f==1) || (s[i]=='B' && f==2) )
          k++;
        else if(s[i]=='A' && f==2)
              f=1;
        else if(s[i]== 'B' && f==1)
             f=2;
    }
   return k; 
}

int main() {
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result = alternatingCharacters(s);
        printf("%d\n", result);
    }
    return 0;
}

