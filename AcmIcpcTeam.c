//https://www.hackerrank.com/challenges/acm-icpc-team/problem

#include<stdio.h>
#include<stdlib.h>

void Perform_BitwiseOR(int n, int m, int *topic[]){
   
       int i,j,s,a,max,c;
       a=s=max=0; 
        
    for( i=0; i<n; i++ ){
    
        for( j=i+1; j<n ; j++ ){
                 s=0;
              
                 for( int k=0; k<m ; k++)
                 { c=topic[i][k]|topic[j][k];
                   s=s+c;
                 }               
                
                  if(s>max)
                 { max=s;  a=1;}
                 else
                 if(s==max)
                    a++;
        }
    }    
     printf("%d\n%d",max,a);  
}


int main(){
    int n; 
    int m,s=0;
    char c; 
    scanf("%d %d",&n,&m);
    int* topic[n];
    for(int i = 0; i < n; i++){
       topic[i] = (int *)malloc(m * sizeof(int));
       getchar();
       for( int k=0; k<m ; k++)
        { scanf("%c",&c);
          topic[i][k]=c-'0';
        }
    }
    
    Perform_BitwiseOR(n,m,topic);

  return 0;
}

