#include<stdio.h>
#include<stdlib.h>

void merge1(double a[],int min,int mid,int max){


      int i=min,j=mid+1,k=0;
      double *h=NULL;
      h=(double *)malloc(sizeof(double)*(max-min+1));  
      while(i<=mid && j<=max){
        
        if(a[i]< a[j])
        { h[k]=a[i]; i++; k++;}
        else
         { h[k]=a[j]; j++; k++;}
             
      }
      
      while(i<=mid)
      { h[k]=a[i];  i++; k++;
      }
     
      while(j<=max)
      { h[k]=a[j];  j++; k++;
      }

        for(i=0;i<k;i++)
        printf("%d  ",(int)h[i]);printf("\n");
  
      for(i=0 ;i<k ;i++)
      { a[min+i]=h[i];
      }  
}
/*
 j=0;

      for(i=min ;i<=max ;i++)
      { a[i]=h[j];j++;
      }  
*/

void merge_sort(double a[],int min,int max){
        int mid;
        
        if(min<max){
            mid=(min+max)/2;
                merge_sort(a,min,mid);
                merge_sort(a,1+mid,max);
                merge1(a,min,mid,max);
        
        }
}


int main(){

   double a[]={8,3,73,8,23,9,370,7,3,01,3,7};
   for(int i=0;i<12; i++)
   printf("%d  ",(int)a[i]);
   
   //printf("=================================\n");
   merge_sort(a,0,11);
   
   for(int i=0;i<12; i++)
   printf("%d  ",(int)a[i]);
   
  // printf("+++++++++++++++=\n");
   
return 0;
}
