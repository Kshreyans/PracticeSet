//https://www.hackerrank.com/challenges/library-fine

#include<stdio.h>

 int cal_fine(int d1,int d2,int m1,int m2,int y1,int y2){
     int fine=0;
        
      
        if( d1>d2 && m1==m2 && y1==y2)
           fine=(d1-d2)*15;
         else
        if(m1>m2 && y1==y2)
          fine=(m1-m2)*500;
         else
         if(y1>y2)
          fine=10000;  
    
 return fine;
}




 int main(){
    int d1; 
    int m1; 
    int y1; 
    scanf("%d %d %d",&d1,&m1,&y1);
    int d2; 
    int m2; 
    int y2; 
    scanf("%d %d %d",&d2,&m2,&y2);
 
    printf("%d",cal_fine(d1,d2,m1,m2,y1,y2));
    return 0;
}
