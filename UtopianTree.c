//https://www.hackerrank.com/challenges/utopian-tree

#include<stdio.h>
#include<stdlib.h>

 void cal_height(int *a,int t){
  
  int i,h,j;
  
     for(i=1; i<=t; i++){
         h=1;
        for(j=1; j<=a[i]; j++){
                if(j%2!=0)
                  h=h*2;
                else  
                  h=h+1;
        }
            printf("%d\n",h);
     }
 }
 

int main(){
    int t; 
    scanf("%d",&t);
    int *a=(int *)malloc((t+1)*sizeof(int));
    for(int i = 1; i <=t; i++){
        scanf("%d",&a[i]);
    }
    
    cal_height(a,t);
    return 0;
}
