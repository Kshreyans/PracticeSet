#include <stdio.h>

// to calculate the maximum sum of the hour glass in 2D array. (Hacker Rank)

int main(){
    int arr[6][6],                                                      //array taken for input
    s=0,                                                                // Variable used for storing sum
    max=0;                                                              // Maximum sum calculated for a hour glass
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){
          
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }
    
    for(int arr_i = 0; arr_i < 6-2; arr_i++)
    {  s=0;
       for(int arr_j = 0; arr_j < 6-2; arr_j++)
       {
         s = arr[arr_i][arr_j]+ arr[arr_i][arr_j+1]+ arr[arr_i][arr_j+2] +
             arr[arr_i+1][arr_j+1] + 
             arr[arr_i+2][arr_j]+ arr[arr_i+2][arr_j+1]+ arr[arr_i+2][arr_j+2];
          
           if((arr_i==0)&&(arr_j==0))                                                   // to intialize value for max
           max=s;
           
           if(s>max)
           max=s;
       }
    
    }
      printf("%d",max);    
    return 0;
    
}

