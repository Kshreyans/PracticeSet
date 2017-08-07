//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/magical-word/

#include<stdio.h>
#include<stdlib.h>


int binarySearch(int k){

    int l=0,
        h=12,
        f=0,
        mid=0;
     int a[]={61,67,71,73,79,83,89,97, 101, 103, 107, 109, 113};    
      
      if(k>114)  
        return 113;
        
         
      while(l<=h){
      
        mid=(l+h)/2;
        
        if(a[mid]==k)
         { f=1;
           break;
         }
          else 
         if(a[mid]>k)
          h=mid-1;
         else
          l=mid+1;

     //   printf("\na[%d]=%d > k=%d\nl=%d   h=%d",mid,a[mid],k,l,h);          
        
      }
             
         
    if(f==1)
     return k;
    else
     { if(abs(k-a[l]) < abs(k - a[h]) )
          return a[l];
        else
          return a[h];   
     }     
}



void TO_MagicWord(char *word,int s){
        
     int i=0;
     char c;   
        while(i<s){
          c=word[i];
            word[i]=binarySearch((int)c); 
            i++;  
        }
        
    printf("%s\n",word);

}

int main(){

    char *word=NULL;
    int n,s=0;        
    
    
    scanf("%d",&n);
    
    
    for(int i=1 ; i<=n ; i++ ){
        scanf("%d",&s);
        word=(char *)malloc(sizeof(char)*s);
        scanf("%s",word);
        TO_MagicWord(word,s);
    }    
        
    return 0;
}
