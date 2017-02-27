// Activity selection algorithm

#include<stdio.h>
#include<stdlib.h>
int n;

 struct node
{ int name;
  int start,end;
}; 

 void b_sort(struct node *a[])
{ int i,j;
  struct node *temp=NULL;
  
  for( i=0; i<n; i++)
  { 
      for( j=0; j<n-1; j++) 
       if(a[j]->end > a[j+1]->end)
        { temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
        }
      
  }
} 

 void Selection(struct node *a[])
{ int i,j,e,k=0;
  int m[n];
 
  m[0]=0; 
  e=a[0]->end; 
  k++;
  
  for(i=1; i<n; i++)
   { if(a[i]->start >= e)
      { m[k]=i;
        e=a[i]->end;
		k++;
      }
  }
  printf("Selected activity:-%d\n  ",k);
  
 
    for(j=0; j<k; j++)
      printf("(Name:-%d   Start->%d   End->%d)\n",a[m[j]]->name,a[m[j]]->start,a[m[j]]->end);
    
  
}   

 int main()
{ int i;
  
  printf("Enter the no. of activity:-"); 	scanf("%d",&n);
  struct node *a[n],*cur;
  
  printf("Enter the activity details:-\n");
   for( i=0; i<n; i++)
  {	  cur=(struct node*)malloc(sizeof(struct node));
  	  cur->name=i+1;
  	  printf("%d th activity start time n end time:-",i+1);
  	  scanf("%d %d",&cur->start,&cur->end);
  	  a[i]=cur;	
  }
  
  b_sort(a);
  
  
  printf("The array is:-");
  for(i=0; i<n; i++)
  printf("  (A-> %d  S->%d  E->%d )\n",a[i]->name,a[i]->start,a[i]->end);
  
  Selection(a);
 return 0;
}
