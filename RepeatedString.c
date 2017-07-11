//https://www.hackerrank.com/challenges/repeated-string

#include<stdio.h>
#include<stdlib.h>

int CalLenght(char *s, int *k){

        int i=0,c=0;
      for(i=0; s[i]!='\0'; i++)
      {   if(s[i]=='a')
            c++;
      }
     *k=c; 
   return i;     
} 

int CalA(char *s,int n){

       int i=0,c=0;
      for(i=0; i<n; i++)
      {   if(s[i]=='a')
            c++;
      }

    return c;
}
 
int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    int c;
    int l=CalLenght(s,&c);
    long n,q,r;                         n=q=r=0;
    scanf("%ld",&n);
    q=n/l;
    r=n%l;
    printf("%ld", q*c + CalA(s,r));
    return 0;
}

