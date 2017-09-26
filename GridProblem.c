//

#include<stdio.h>
#include<string.h>

int CheckPattern(char a[][100],int i,int j,char k[][100],int r,int c)
{
    int l,p;
    
    for(l=i; l< (r+i); l++){
    
        for(p=j; p<(c+j); p++){
                printf("a[%d][%d]!=k[%d][%d]\n== %d\n",l,p,l-i,p-j,strcmp(&a[l][p],&k[l-i][p-j]));
                if(strcmp(&a[l][p],&k[l-i][p-j]) )
                 return 0;
        }
    }
     
     printf("i=%d  j=%d\n",i,j);
   return 1;
}


int main(){

        int t,f;
        scanf("%d",&t);
        
        
        int row,col,i,j,r,c,g;
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
              printf("============================================\n");
                for(i=0; i<r; i++)
                 printf("%s\n",k[i]); 
                printf("+++++++++++++++++++++++++++++++++++++\n");
                for(i=0; i<row; i++)
                 printf("%s\n",a[i]); 
              
              for(i=0; i<=(row-r); i++){
              
                for(j=0; j<=(col-c); j++){
                
                    if(a[i][j]==k[0][0])
                    { 
                        if(CheckPattern(a,i,j,k,r,c))
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
