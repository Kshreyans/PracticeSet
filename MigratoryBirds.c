//https://www.hackerrank.com/challenges/migratory-birds

#include<stdio.h>
#include<stdlib.h>

 
 int countTypes(int *types,int n)
{
  int *a=(int *)malloc(sizeof(int)*5);
  int i,l=0;
  
  a[0]=a[1]=a[2]=a[3]=a[4]=0;  
  
  for(i=0; i<n; i++)
   a[types[i]-1]++;
  
  for(i=1; i<5; i++)
  { 
    if(a[i]>a[l])
     l=i;
  }
  
  return l+1;
} 
 
 int main(){
    int n; 
    scanf("%d",&n);
    int *types = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
       scanf("%d",&types[i]);
    }

    printf("%d",countTypes(types,n));
    return 0;
}

