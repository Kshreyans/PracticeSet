//https://www.hackerrank.com/challenges/append-and-delete

#include<stdio.h>
#include<stdlib.h>

 int Cal_length(char *s){

  int i;
  for(i=0; s[i]!='\0' ; i++);
  
  return i;
}


 void Perform(char *s,char *t,int k){

     int i,ws,wt,p;
  for(i=0; s[i]!='\0' && t[i]!='\0' ; i++)
  { if(s[i]!=t[i])
    break;
  }
           ws= Cal_length(s); wt=Cal_length(t);
    p=ws+wt-2*i; 

    if(p<=k)
    {           
           if((k-p)%2==0)
            printf("Yes");
           else
            if(k>2*wt)          
             printf("Yes");
           else
           printf("No");
    }
    else
     printf("No");
}


 
 int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    char* t = (char *)malloc(512000 * sizeof(char));
    scanf("%s",t);
    int k; 
    scanf("%d",&k);

    Perform(s,t,k);   
    return 0;
}
/* if(i==0||p==0 && k >=wt*2)
                  printf("Yes");
                else
                 if(p%2!=0 && k%2!=0)
                  printf("Yes");
                else
                 if(p%2==0 && k%2==0)
                  printf("Yes");
                 else
                  printf("No"); 
*/
