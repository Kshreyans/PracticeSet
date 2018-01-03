//https://www.hackerrank.com/challenges/pangrams

#include<stdio.h>
#include<stdlib.h>


int main(){

        char *s;
        s=(char *)malloc(sizeof(char)*1500);
        fgets(s,1500,stdin);
        int a[26]={0},k=0,i,c;
        
        
        for(i=0; s[i] != '\0'; i++ ){
           // c= s[i];                                          // casting to a integer 
             if(s[i] >= 65 && s[i]<=90 )                        // compiler auto cast to a integer
               { 
                 if(a[s[i]-65]!=1)
                  {
                   a[s[i]-65]=1;
                   k=k+1;
                  }
               } 
             
              if(s[i] >= 97 && s[i]<=122 )
              { 
                if(a[s[i]-97]!=1)
                  {
                   a[s[i]-97]=1;
                   k=k+1;
                  } 
                
              }
               
                
              if(k == 26){
                break;
              }  
        }
       
        
        if(k==26)
        printf("pangram\n");
        else
        printf("not pangram\n");

        return 0;
}
