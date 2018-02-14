//https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem

#include<stdio.h>
#include<stdlib.h>

int find1(int a[], int max){

        int i;
        
        for( i=0; i<26; i++ ){
                if(a[i]!=0 && a[i]!=max)
                 return 0;
        }
    return 1;    
}



char* isValid(char* s){
   
    int i,a[26]={0},max=-1,k,j;
    
    for(i=0; s[i]!='\0'; i++ ){
       k=s[i]-'a';
        a[k]++;
        
        if(a[k]>max)
        max=a[k];
    }
    
    if( find1(a,max) )
     return "YES";
        
     for( i=0; i<26; i++ ){
    
        if( a[i]!=0 )
         {      
             a[i]--;
             for( j=0; a[j]==0; j++ );
             
             if( find1(a,a[j]) )
               return "YES";
               
             a[i]++;  
         }
    }
       
    return "NO";
}    


int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
    char* result = isValid(s);
    printf("%s\n", result);
    return 0;
}
