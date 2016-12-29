// To rotate an array left wise by 'd' no. of rotations
// https://www.hackerrank.com/challenges/array-left-rotation

#include<stdio.h>

 int main()
{ int n,                                                        // size of array
      d,                                                        // no. of rotations
      i;                                                        // loop counter
      n=i=d=0;                                          
    
    scanf("%d%d",&n,&d);
      
  int a[n],b[n];                                                
  
  for(i=0 ;i<n ;i++)
  scanf("%d",&a[i]);
 
    
  if(d>n)                                                       // if rotation is equal to no. of elements then it would result into
   d=d%n;                                                       //  same array or if greater (i.e multiple of n)
  
   for(i=0 ;i<n ;i++)                                           
  { 
    if((i-d)<0)                                                 // assigning new places to variables in new array set.
     b[i-d+n]=a[i];
    else
     b[i-d]=a[i];
  }

 for(i=0 ;i<n ;i++)                                             // printing new array set.
 printf("%d ",b[i]);
 
return 0;
}
