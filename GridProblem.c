//https://www.hackerrank.com/challenges/the-grid-search/problem

#include<stdio.h>
#include<string.h>
        
     int row,col,r,c;

int CheckPattern(char a[][col],int i,int j,char k[][c])
{
    int l,p;
    
    for(l=i; l< (r+i); l++){
    
        for(p=j; p<(c+j); p++){
              
                if(a[l][p]!=k[l-i][p-j] )
                 return 0;
        }
    }
     
 return 1;
}


int main(){

        int t,f;
        scanf("%d",&t);
        
        int i,j,g;
        
        for(f=0; f<t; f++ ){
               
           g=0;    
                scanf("%d%d",&row,&col);
             char a[row][col];
               
             for(i=0; i<row; i++)
                scanf("%s",a[i]); 
            
               scanf("%d%d",&r,&c);
                 char k[r][c];
              for(i=0; i<r; i++)
                 scanf("%s",k[i]); 
        
            
              for(i=0; i<=(row-r); i++){
              
                for(j=0; j<=(col-c); j++){
                
                    if(a[i][j]==k[0][0])
                    { 
                        if(CheckPattern(a,i,j,k))
                        { printf("YES\n");g=1;break;
                        }
                    }
                } 
                   if(g==1)
                    break;
              }
              
              if(g!=1)
              printf("NO\n");
        }


        return 0;
}
