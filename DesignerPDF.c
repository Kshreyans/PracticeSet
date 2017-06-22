//https://www.hackerrank.com/challenges/designer-pdf-viewer

#include<stdio.h>
#include<stdlib.h>

 int cal_area(int *h,char *word){
    int i=0,max,a=0;
   
   max=h[word[0]-97];
   for(i=1; word[i]!='\0'; i++){
        
        if(max < h[word[i]-97])
          max=h[word[i]-97];
   }
     a=(i)*max;
     return a;
 }
 

int main(){
    int *h = malloc(sizeof(int) * 26);
    for(int h_i = 0; h_i < 26; h_i++){
       scanf("%d",&h[h_i]);
    }
    char* word = (char *)malloc(10 * sizeof(char));
    scanf("%s",word);
    
    printf("%d",cal_area(h,word));
    return 0;
}

