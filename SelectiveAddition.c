#include<stdio.h>
#include<stdlib.h>

int search(int min,int max,long int s[],long int k){

        int mid;
  
      while(min<=max){
      
      mid=(min+max)/2;
      
          if(s[mid]==k)
            return 1;
          else
           if(k>s[mid])
             min=mid+1;
            else  
             max=mid-1;
      }
   return 0;
}

void merge1(long int a[],int min,int mid,int max){


      int i=min,j=mid+1,k=0;
      long int *h=NULL;
      h=(long int *)malloc(sizeof(long int)*(max-min+1));  
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

      for(i=0 ;i<k ;i++)
      { a[min+i]=h[i];
      }  
}


void merge_sort(long int a[],int min,int max){
        int mid;
        
        if(min<max){
            mid=(min+max)/2;
                merge_sort(a,min,mid);
                merge_sort(a,1+mid,max);
                merge1(a,min,mid,max);
        
        }
}

int main() {
    int n; 
    int m; 
    int k; 
    int sum=0;
    scanf("%i %i %i", &n, &m, &k);
    int *A = malloc(sizeof(int) * n);
    for (int A_i = 0; A_i < n; A_i++) {
       scanf("%i",&A[A_i]);
    }
    long int *S = (long int*)malloc(sizeof(long int) * k);
    for (int S_i = 0; S_i < k; S_i++) {
       scanf("%li",&S[S_i]);
    }
    
   merge_sort(S,0,k-1);                  //sorting the fav. array for binary searching
    
    for(int a0 = 0; a0 < m; a0++){
        int l; 
        int r; 
        int x; 
        scanf("%i %i %i", &l, &r, &x);
        sum=0;
        for(int i=0; i<n ; i++)
        { if( i>=(l-1) && i<=(r-1) && !search(0,k-1,S,A[i]) )
             A[i]=A[i]+x;
            sum=sum+A[i];
        }
        
     printf("%d\n",sum);
    }
    
    return 0;
}

