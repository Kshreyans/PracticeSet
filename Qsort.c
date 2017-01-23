
//To dyanamically create an array & fill elements with random no. and find the time taken to perform quick sort for various inputs.

#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
 
 
   void partition(int arr[],int l,int h)
{ int pos;
   
    if(l<h)
   { pos=Qsort(arr,l,h);
     partition(arr,l,pos-1);
     partition(arr,pos+1,h);
   } 
}

  int Qsort(int arr[],int l,int h)
{ 
    int u,d,piv,temp=0;
    d=l;
    u=h;
    piv=arr[l];
  
    while(1)
   {  
        while(arr[d] <= piv && d<h)
        d++;
        
        while(arr[u] > piv )
        u--;
        
         if(d < u)
        {   temp=arr[d];
            arr[d]=arr[u];
            arr[u]=temp;
        }
        else
        break;
   }
      if(u < d)
     {  temp=arr[l];
        arr[l]=arr[u];
        arr[u]=temp;
     }
    return u;     
}

 
 int main()
{ 
 	int i,l,*a,n;
     struct timeval t1,t2;
     l=0;
     printf("Enter the size of array:-");
     scanf("%d",&n);
  
      a=(int *)malloc(sizeof(int )*n);
    
      for(i=0; i<n; i++)
     {	a[i]=(random()%(20-15+1))+15;
      
      }
      for(i=0; i<n; i++)
     {	
        printf("%d ",a[i]);
      
      }
        printf("\n ");
      gettimeofday(&t1,NULL);
  	 
    	partition(a,l,n-1);
    	
	 gettimeofday(&t2,NULL);
	 
	 printf("\ntv_usec %ld\n",(t2.tv_sec - t1.tv_sec)*1000000l+t2.tv_usec - t1.tv_usec);

     for(i=0;i<n;i++)
	  printf("%d ",a[i]);
	 printf("\n"); 
	 
	 //free(a);
	 return 0;
	 
}










