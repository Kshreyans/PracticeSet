//https://www.hackerrank.com/challenges/between-two-sets

#include<stdio.h>
#include<stdlib.h> 

 void input_arr(int a1[],int n)
{ int i;
  printf("\nEnter the array:-");
 
  for(i=0;i<n;i++)
  scanf("%d",&a1[i]);
}

 void display(int a1[],int n)
{ int i;
  for(i=0;i<n;i++)
  printf("%d    ",a1[i]);
  
} 

 void sort(int a[],int n)
{ int i,j,temp;
  
  for(i=0; i<n-1; i++)
  {
        for(j=0; j<n-1-i; j++)
        {       
                if(a[j]>a[j+1])
                { temp=a[j];
                  a[j]=a[j+1];
                  a[j+1]=temp;
                }
        }
  }
}

 int checkforx(int i,int a1[],int a2[],int n1,int n2)
{ int j,f;
         
         for(j=0; j<n1; j++)
           { if(i%a1[j]!=0) 
              { return 0;}
           }
           
         for(j=0; j<n2; j++)
           { if(a2[j]%i!=0) 
              { return 0;}
           }
           
   return 1;             
} 

 void getTotalX(int a1[],int a2[],int n1,int n2)
{ int i,c=1;
         
          for(i=a1[n1-1]; i<=a2[0]; c++,i=a1[n1-1]*c)
          {  
             if(checkforx(i,a1,a2,n1,n2))
              printf("%d     ",i);
          }
} 


 int main()
{ int n1,n2,i;
  
  printf("Enter the size of two array:-");
  scanf("%d%d",&n1,&n2);
  
  int *a1=(int *)malloc(sizeof(int)*n1);
  int *a2=(int *)malloc(sizeof(int)*n2);
  
  input_arr(a1,n1);
  input_arr(a2,n2);
  
  sort(a1,n1);
  sort(a2,n2);
  getTotalX(a1,a2,n1,n2);
  
  display(a1,n1);
  printf("---------------");
  return 0;
}
