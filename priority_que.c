#include<stdio.h>
#include<stdlib.h>
int n;



 void heapify(int pr[],int a[],int i)
{ int c1,c2,gr=i;
	c1=i*2+1;
	c2=i*2+2;
   
   if(c1<(n-1))
  	{ 
  		if(pr[c1]<pr[gr])
  		 gr=c1;
  		if(pr[c2]<pr[gr])
  		 gr=c2; 
  	}
  if(gr!=i)
  { int c=a[pr[gr]];
  		a[pr[gr]]=a[pr[i]];
  		a[pr[i]]=c;
  		c=pr[i];
  		pr[i]=pr[gr];
  		pr[gr]=c;
  		
  	  heapify(pr,a,gr);	
  }	
}


 void build_heap(int pr[],int a[])
{ int i; 
	for(i=(n-1)/2; i>=0; i--)
 	 heapify(pr,a,i);
}
 
 void del(int a[],int pr[]) 
{ 	printf("%d =-> %d \n",a[0],pr[0]);
	a[0]=a[n-1];
	pr[0]=pr[n-1];
	n--;
	heapify(pr,a,0);
}


 int main()
{ int *a,*pr,i,f,c,j;
	printf("Enter the size of array:-");
	scanf("%d",&n);
	
	a=(int *)malloc(sizeof(int )*n);
	pr=(int *)malloc(sizeof(int )*n);
	
	for( i=0; i<n; i++)
	a[i]=random()%100;
	
	for( i=0; i<n; i++)
	  { c=random();f=0;
	  	c=c%n;
		 
		 for( j=0; j<i; j++)
			{ 
			   if(c==pr[j])
			     { f=1;break;} 
			}
		 
		  if(f==1)
		    i--;
		  else
		   	pr[i]=c;
       }
      
      for( i=0; i<n; i++)
      printf("%d   ->  %d\n",a[i],pr[i]);
      
      printf("\n---------------------------------------------------------------------------------\n");
      build_heap(pr,a);
      while(n>0)
      del(a,pr);
	   // printf("%d   ->  %d\n",a[i],pr[i]);
      
	return 0;
} 
