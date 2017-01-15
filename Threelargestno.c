
//To calculate the product of three largest interger in array upto a particular index.

#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int minz(int a[],int i)                                                 // To calculate the minimum no. till 'i'
{ int j,min=0;
  for( j=0; j<=i;j++)
  if(a[j]<a[min])
   min=j;
  return min;                                                           // returning the minimum no.
}

int main() 
{ int size,i,j,l,s,t;
 
 scanf("%d",&size);                                                     // size - size of array
 
 if(size < 0)
   return 0;  
 
 int a[size];
 
 for(i=0;i< size;i++)
  scanf("%d",&a[i]);
        
 for(i=0;i< size;i++)                                                   
   { l=minz(a,i);
     s=t=l;printf("%d  ",a[l]);
     
     for(j=0;j<=i;j++)                                                  // loop for calulating the three largest interger
       { if(a[j]>a[l])
         { t=s;
           s=l;
           l=j;
         }
         else
         if(a[j]>a[s])
         { t=s;
           s=j;
         }
         else 
         if(a[j]>a[t])
             t=j;
       }
     
     if((l==s)&&(t==s)||(l==s)||(t==s))                      // checking if largest,second largest & 3rd largest interger are same or not 
         printf("-1\n");
      else
          printf("%d\n",a[l]*a[t]*a[s]);
   }  
    return 0;
}
