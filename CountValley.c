//https://www.hackerrank.com/challenges/counting-valleys

#include<stdio.h>
#include<stdlib.h>


 int countval(char *c,int n){
 
       int i,d=0,v=0;
       
       for(i=0; i<n; i++)
       { 
            if(c[i]=='U')
            d++;
            else
            if(c[i]=='D')
            d--;
            
            if(d==0 && c[i]=='U')
            v++;
       }
    return v;   
 } 

int main() {
    int n,i;
    
   scanf("%d",&n);
    char *c=(char *)malloc(sizeof(char)*n);getchar();
    for(i=0; i<n; i++)
     scanf("%c",&c[i]);
   //char c[]={'U','D','D','D','U','D','U','U'};
   
   printf("%d", countval(c,n) );
    return 0;
}

