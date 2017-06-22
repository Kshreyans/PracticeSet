//https://www.hackerrank.com/challenges/climbing-the-leaderboard

#include<stdio.h>
#include<stdlib.h>

 int cal_rank(int *score,int n,int *alice,int m){
 
 int j,rank=1,prv;
 
 
        rank=1;prv=0;
        
       if( score[0] > 0)   
        for(j=0; j<n; j++){
        
                if(score[j]<prv)
                  rank++;
           
                if(score[j]<= 0)
                 break;
                 
                 prv=score[j];
        }
        
        
        
 return rank;
}
 
 
 void cal_rank1(int *score,int n,int *alice,int m){
 
 int i,j,rank=1,prv,t=1;
                             rank= cal_rank(score,n,alice,m);
 for(i=0; i<m; i++){
        
        
        if(alice[i]>score[n-t]) 
           for(j=n-t; j>=1; j--){
                if(score[j]!=score[j-1] && score[j-1]<=alice[i])      
                 rank--; 
            
                if(score[j-1]>alice[i])
                  break;  
                 t++;
        }
     
      if(score[n-t]>alice[i])
          printf("%d\n",rank+1);
         else         
          printf("%d\n",rank);
 }
 
 
}


int main(){
    int n; 
    scanf("%d",&n);
    int *scores = (int *)malloc(sizeof(int) * n);
    for(int scores_i = 0; scores_i < n; scores_i++){
       scanf("%d",&scores[scores_i]);
    }
    
    int m; 
    scanf("%d",&m);
    int *alice = malloc(sizeof(int) * m);
    for(int alice_i = 0; alice_i < m; alice_i++){
       scanf("%d",&alice[alice_i]);
    }
    
    cal_rank1(scores,n,alice,m);
    return 0;
}


