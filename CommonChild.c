//https://www.hackerrank.com/challenges/common-child/problem

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int commonChild(char* s1, char* s2){
    int i,j,**a=NULL,m,n;
    
    n=strlen(s1)+1;
    m=strlen(s2)+1;
    a=(int **)malloc(sizeof(int *)*m);
    
    for(i=0; i<n; i++ ){
        a[i]=(int *)calloc(n,sizeof(int));                      // m rows(s2) ,n columns(s1)
    }
    
    for( i=1; i<m; i++ ){                               
    
        for( j=1; j<n; j++ ){
        
                if( s1[j-1]==s2[i-1] ){                         //j-1 & i-1    : coz i n j are starting from 1 as zero on row n column side
                        a[i][j]=a[i-1][j-1]+1;                  //              is extra.
                }else
                 if(a[i-1][j] > a[i][j-1])
                   a[i][j]=a[i-1][j];
                  else
                    a[i][j]=a[i][j-1];
        }
    }
    
        
   return a[m-1][n-1]; 
}

int main() {
    char* s1 = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s1);
    char* s2 = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s2);
    int result = commonChild(s1, s2);
    printf("%d\n", result);
    return 0;
}

