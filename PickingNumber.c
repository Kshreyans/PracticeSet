//https://www.hackerrank.com/challenges/picking-numbers/

#include<stdio.h>
#include<stdlib.h>

 int maxSet(int *a,int n){
    int i,j,max=0,s=0,f=0,k;
    int maxArr[n],arr[n];
 
    for(i=0; i<n; i++){
       s=0;
    
       for(j=0; j<n; j++){
         if(abs(a[i]-a[j]) <= 1)
           {  f=0;
              for(k=0; k<s; k++)
               {
                 if(abs(a[j]-arr[k])>1)
                    f=1;
                }
                
                if(f!=1)
                arr[s++]=a[j];
           }
       }
   
      if(max<s)
       { max=s;
         for(k=0; k<s; k++)
          maxArr[k]=arr[k];
       }
    }
    
    for(i=0; i<max ; i++)
    printf("%d  ",maxArr[i]);   
   return max; 
 }


int main(){
    int n; 
    scanf("%d",&n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    
    printf("%d",maxSet(a,n));
    return 0;
}

