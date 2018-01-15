//https://www.hackerrank.com/challenges/gem-stones/problem

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int gemstones(int a[],int n){
   
    int i,k=0;
    
    for( i=0; i<26; i++ ){
      if(a[i]==n)
        k++;  
     }
  return k;  
}

int main() {
    int n,a[26],j,i; 
    scanf("%i", &n);
    char *arr ;
    
    for(j=0; j<26; j++)
       a[j]=0; 
    
    for( i = 0; i < n; i++){
       arr = (char *)malloc(10240 * sizeof(char));
       scanf("%s",arr);
        
       for( j=0; arr[j]!='\0' ; j++ ){
           
            if(a [ arr[j]-'a' ] == i )
              a [ arr[j]-'a' ]=i+1;  
       } 
    }
    
    int result = gemstones(a,n);
    printf("%d\n", result);
    return 0;
}

