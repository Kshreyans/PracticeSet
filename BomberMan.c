//https://www.hackerrank.com/challenges/bomber-man/problem



#include<stdio.h>
#include<string.h>


void ConvertExploded(int r,int c,char b[][c], char initial[r][c]){

        int i,j;
        
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
                                
                                printf("fUNCTION:-   \n");
                             for( i=0; i<r; i++ ){
                               for(j=0; j<c; j++) 
                                printf("%c",b[i][j]);
                                printf("\n");
                         }   
}




int main(){

        int r,c,i,j;
        long n;
        scanf("%d%d%ld",&r,&c,&n);
        
        char initial[r][c],b[r][c];
          char k[r][c];   
       // bzero(initial,r*c);
        
        for(i=0; i<r; i++)
         scanf("%s",initial[i]);
         
          if(n==1 || n==0)
             n=0;
         
         if( n!=0 && n%2==0)
           n=2;
         
          n=n%4;
          
                 for(i=0; i<r; i++) 
                    for(j=0; j<c; j++)
                  {     b[i][j]=79;  k[i][j]=79;}
                                          
                     
                     
         
         switch(n){
         
                case 0:  for( i=0; i<r; i++ ){
                                
                                printf("%s\n",initial[i]);
                         } break;    
           
                case 2:         
                        for( i=0; i<r; i++ ){
                                for(j=0; j<c; j++){
                        
                                        printf("O");        
                                }
                                printf("\n");
                         }
                        break;
            
                case 3:     ConvertExploded(r,c,b,initial);
                           
                             for( i=0; i<r; i++ ){
                               for(j=0; j<c; j++) 
                                printf("%c",b[i][j]);
                                printf("\n");
                         }   

                                 break;             
                case 1:     
                              
                                  for(i=0; i<r; i++) 
                                       for(j=0; j<c; j++)
                                                
              
                             ConvertExploded(r,c, b, initial);
                             ConvertExploded(r,c,k, b);
                             
                            for( i=0; i<r; i++ ){
                               for(j=0; j<c; j++) 
                                printf("%c",k[i][j]);
                                printf("\n");
                         }               
                        break;
                
                 
         }
        return 0;
}
