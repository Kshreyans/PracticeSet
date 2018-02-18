//https://www.hackerrank.com/challenges/richie-rich/problem

#include<stdio.h>
#include<stdlib.h>

char* richieRich(char* s, int n, int k){
    int i,j;
    
    i=n/2-1;
    if( n%2 ==0 )
        j=n/2;
    else
        j=n/2+1;
    
    if(n == 1)
     return "9";
    
    for( ;i>=0 && j<n ; i--, j++ ){
        
        if( s[i]!=s[j] ){
            
            if( k <= 0 )
                return "-1";
            
            if(k >= (n-j)*2 ){
                s[i]=s[j]='9';
                k=k-2;
            }else{
                
                if( s[i] > s[j] )
                   s[j]=s[i];
                else
                   s[i]=s[j];
                k--;
            }   
        }
    }
    
    if(k > 0 )
    for( i=0; i< n/2; i++ ){
        if( k >= 2 && s[i]!='9' )
        {  s[i]=s[n-1-i]='9';
            k=k-2;
        //printf("l ");
        } 
        
    }
    
    if( n%2!=0 && s[n/2]!=9 && k==1 )
       s[n/2]='9'; 
        
    return s;
}

int main() {
    int n; 
    scanf("%i", &n);
    int k; 
    scanf("%i", &k);
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
    
    char* result = richieRich(s, n, k);
    printf("%s\n", result);
    return 0;
}

