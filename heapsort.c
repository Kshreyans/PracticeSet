// To find max heap tree of array filled with random no. upto 100.

#include<stdio.h>
#include<stdlib.h>
int hts;

 void heapify(int arr[],int i)                                          // To compare for greater children n parent & assign it as root.
{  int gr=i,c1,c2;
   c1=i*2+1;                                                            //child 1       
   c2=i*2+2;                                                            //child 2
   
     if(c2<hts && c1<hts)
    {	
   		if(arr[c1]>arr[gr])
   		  gr=c1;
   		if(arr[c2]>arr[gr])
   		  gr=c2;
    }
    
    if(gr!=i)
    { int temp=arr[gr];
      	  arr[gr]=arr[i];
      	  arr[i]=temp;
      	 heapify(arr,gr);                                               // To heapify its children
    }
} 




 void build_heap(int arr[])
{	int i;
 	
 	for(i=hts/2; i>=0; i--)                                         //to heapify each node of the tree.
 	 heapify(arr,i);
}

 void display(int arr[])
{ int i;
  for(i=0; i<hts; i++)
   printf("%d ",arr[i]);
} 


 int main()
{ 	int *arr,i;
  	printf("Enter the size of the array:-");
	 scanf("%d",&hts);
   
  	arr=(int *)malloc(hts*sizeof(int));
    
  	for(i=0; i<hts; i++)
 	 arr[i]=random()%100+1;                                         // To assign random no. to the array 

	display(arr);

   	build_heap(arr);
    
     printf("\n");
     display(arr);                                                      
 return 0;
}
