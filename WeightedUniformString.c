//https://www.hackerrank.com/challenges/weighted-uniform-string

#include<stdio.h>
#include<stdlib.h>


int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    
    int n,a[26]={0},i,k; 
    scanf("%d",&n);
    
    a[s[0]-97]++;
    k=1;
    for( i=1; s[i]!='\0'; i++ ){
           
           if( s[i-1]==s[i] ){
                k++;
            }
           else
            k=1;
            
           if(a[s[i]-97] < k){
             a[s[i]-97] = k;   
           } 
    }
    
/*    for(i=0; i<26; i++ ){
        printf(" %d  %d\n",i+1,a[i]);
    }
  */  int x,q,f=0; 
    for(int a0 = 0; a0 < n; a0++){
        
        scanf("%d",&x);
        f=0;
        if(x!=0)
        for( i=0; i < 26; i++ ){
              
                if(x%(i+1) ==0){
                      q=x/(i+1);
                      if(q <= a[i] ){
                        printf("Yes\n");
                        f=1;break;
                      }  
                }
        }
        
        if( x==0 || f == 0 ){
                printf("No\n");
        }   
        
        
    }
        return 0;
}
