//https://www.hackerrank.com/challenges/happy-ladybugs/problem

#include<stdio.h>
#include<stdlib.h>


int main(){
    int Q,j; 
    scanf("%d",&Q);
    for(int a0 = 0; a0 < Q; a0++){
        int n,k=0,f=0; 
        scanf("%d",&n);getchar();
        char* b = (char *)malloc( (n+1) * sizeof(char));
            //  scanf("%s",b);
        int freq[26]={0};
        
        for( j=0; j <n; j++ ){
                
                scanf("%c",&b[j]);
                if(b[j]=='_')
                  k++;
                else  
                 freq[b[j]-'A']++;   
        }
        printf("word:- %s\n",b);
        
        if(n==1)
         f=1;
        else
        if(k==0){
           for(j=0; j<n; j++){
                if ((j-1 >=0 && b[j]!=b[j-1] ) && ((j+1)<n && b[j] != b[j+1]) ) 
                 { f=1;break;
                 }
           }
        }
         else
          if(k== n-1 )
         {   f=0;}      
        else
        {  
            for(j=0; j<26; j++)
             if(freq[j]==1)
               { f=1;break;}
        }
        
                if(f==1 )
                  printf("NO\n");
                else
                  printf("YES\n");
    }
    return 0;
}
