
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int palindromeIndex(char* s){
    int c=-1,i,len,k=0;
    
    len=strlen(s);
    
    for( i=0; i<=len/2; i++ ){
        printf("%c=%d   %c=%d ----",s[i],i,s[len-1-i-k],len-1-i-k);
        
          if(s[i]!= s[len-1-i-k] ){
          
            if(k!=0) 
            {   i=c;
                c=len-c-1;
                k=k+2;
            }
            
            if(s[i+1]== s[len-1-i-k] )
             { c=i; i++; k--; }
            else
            if( s[i] == s[len-2-i-k] )
             { c=len-1-i; k++; } 
        }
        
    }
    
    if( c==-1 )
       return -1;
    
    return c;
}

int main() {
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result = palindromeIndex(s);
        printf("\n%d\n", result);
    }
    return 0;
}

