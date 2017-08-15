#include<stdio.h>
#include<string.h>

void merge(char word[][10], int min, int mid, int max){

     int i=min,j=mid+1,k=0;   

   char a[max-min+1][5];     
  while(i<=mid && j<=max){
        
        if(strcmp(word[i],word[j])<0)
           strcpy(a[k++],word[i++]);     
        else
           strcpy(a[k++],word[j++]); 
                
  }

        while(i<=mid){
            strcpy(a[k++],word[i++]);    
        }

        while(j<=max){
            strcpy(a[k++],word[j++]);    
        }
        
    for(int i=0; i<k; i++ )    
        strcpy(word[min+i],a[i]);
}

void merge_Sort(char word[][10], int min,int max){

   int mid;
   
   if(min<max){
     mid=(min+max)/2;
     merge_Sort(word,min,mid);
     merge_Sort(word,mid+1,max);    
     merge(word,min,mid,max);
   }
}

void binary_search(char word[][10], int min,int max){

char find[10];
    scanf("%s",find); 
     
     int mid;
 while(min<=max){
 
 mid=(min+max)/2;
        if(strcmp(word[mid],find)==0)
           {printf("Position-%d ",mid+1);
                return;
           }
         
         if(strcmp(word[mid],find)<0)
           min=mid+1;
         else
         if(strcmp(word[mid],find)>0)        
           max=mid-1;     
 }  

    printf("Not found\n");    
}

int main(){

  
   int min=0,max;
   int n,i;
   printf("Enter the no. of words:-");scanf("%d",&n);
   max=n;
    char word[n][10];
   for(i=0;i<n;i++)
   {    getchar();
        scanf("%s",word[i]);
   }
 
  merge_Sort(word,min,max);
  
  binary_search(word,min,max); 
   return 0;
}
