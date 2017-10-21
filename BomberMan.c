//https://www.hackerrank.com/challenges/bomber-man/problem



#include<stdio.h>
#include<string.h>

/*
void ConvertExploded(int r,int c,char ***b, char initial[r+1][c+1]){

        int i,j;
        
        for(i=0; i<r; i++){
        
                for(j=0; j<c; j++){
                    b[i][j]='0';
                    
                    if(initial[i][j]==0){
                        
                        if(i<=1)
                         b[i-1][j]='.';
                         
                        if(i < r-1) 
                         b[i+1][j]='.';
                         
                         if(j>=1)
                         b[i][j-1]='.';
                         
                         if(j < c-1)
                         b[i][j+1]='.'; 
                    
                    }    
                }
                
        }


}

*/


int main(){

        int r,c,i,j;
        long n;
        scanf("%d%d%ld",&r,&c,&n);
        
        char initial[r+1][c+1],b[r+1][c+1];
        
       // bzero(initial,r*c);
        
        for(i=0; i<r; i++)
         scanf("%s",initial[i]);
      
         n=n%4;
         
         switch(n){
                case 2:         
                case 0:
                        for( i=0; i<r; i++ ){
                                for(j=0; j<c; j++){
                        
                                        printf("0");        
                                }
                                printf("\n");
                         }
                        break;
                 
                case 3:     
                               
                                for(i=0; i<r; i++)
                                 for(j=0; j<c; j++)
                                    b[i][j]=79;
                             //    ConvertExploded(r,c, &b, initial);
                               for(i=0; i<r; i++){
        
                                for(j=0; j<c; j++){
                                    if(initial[i][j]==79){
                                        b[i][j]='.';
                                        if(i>=1)
                                         b[i-1][j]='.';
                                 
                                        if(i < r-1) 
                                         b[i+1][j]='.';
                         
                                         if(j>=1)
                                         b[i][j-1]='.';
                         
                                         if(j < c-1)
                                         b[i][j+1]='.'; 
                            
                                            }    
                                        }
                
                                } 

                            for( i=0; i<r; i++ ){
                               for(j=0; j<c; j++) 
                                printf("%c",b[i][j]);
                                printf("\n");
                         }               
                        break;
                
                case 1:  for( i=0; i<r; i++ ){
                                
                                printf("%s\n",initial[i]);
                         } break;     
         }
        return 0;
}
