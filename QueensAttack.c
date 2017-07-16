#include<stdio.h>
#include<stdlib.h>

int AttackOptions(int n,int rQ,int cQ,int k,int a[][2]){

     int i,j,c=0,t,z;
     
     int d1,
         d2,
         r,
         col;           
         
         d1=d2=r=col=0;
     
     for( i=1; i<=n; i++ ){
        t=(rQ+cQ)-2*(rQ-i);
        for(j=1; j<=n; j++){
            
            
            
            for(z=0; z<k ; z++){
  
               
              
              if(i==a[z][0] && j==a[z][1])             
               {  printf("\n  --(%d %d)-- |||| {%d,%d}  ",i,j,a[z][0],a[z][1] );
                
                  if( t==(i+j) ) 
                    { d1=1; break;}
                    else 
                  if((i+j)==(rQ+cQ))
                    { d2=1; break;}
                    else
                  if (i==rQ) 
                    {r=1; break;}
                    else 
                  if(j==cQ) 
                    {col=1; break;}
           
               } 
            }
            
            
            
             if(d1==0 && t==(i+j) ) 
              {printf("(%d ,  %d ) ",i,j); c++;}
              else 
             if(d2==0  && (i+j)==(rQ+cQ))
               {printf("(%d ,  %d ) ",i,j); c++;}
              else
             if ( r==0 &&  i==rQ) 
               {printf("(%d ,  %d ) ",i,j); c++;}
             else 
             if(col==0 && j==cQ) 
                {printf("(%d ,  %d ) ",i,j); c++;}
        }
     printf("\n");
     }

        return c-1;
}


int main(){
    int n; 
    int k,i,j; 
    
    scanf("%d %d",&n,&k);
    int rQueen; 
    int cQueen; 
    scanf("%d %d",&rQueen,&cQueen);

     int a[k][2];   
    for(int a0 = 0; a0 < k; a0++){
        scanf("%d %d",&i,&j);
        a[a0][0]=i;
        a[a0][1]=j;
      }
      printf("\n-----------");
      for(int a0 = 0; a0 < k; a0++){
        printf("(%d %d)         ",a[a0][0],a[a0][1]);
     
      }printf("\n-----------\n");
      
      
      
        printf("%d\n",AttackOptions(n,rQueen,cQueen,k,a));   
    return 0;
}

/*

 for(int a0 = 0; a0 < k; a0++){
        int rObstacle; 
        int cObstacle; 
        scanf("%d %d",&rObstacle,&cObstacle);
        // your code goes here
    }


*/

