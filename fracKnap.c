#include<stdio.h>
#include<stdlib.h>

 struct node
{  int name,
       up,                                                              // unit price 
       p,                                                               // price
       w;
 float f;                                                               // taken or not
                                                                      
};

 void b_sort(struct node *a[],int q)
{ int i,j;
  struct node *temp=NULL;
  
  for( i=0; i<q; i++)
  { 
      for( j=0; j<q-1; j++) 
       if(a[j]->up < a[j+1]->up)
        { temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
        }
      
  }
} 


 void frac_knap(struct node *a[],int m,int q)
{  int i;  
    for(i=0; i<q; i++)
    { 
        if(a[i]->w < m)
        { a[i]->f=1;
          m=m-a[i]->w; 
         }
        else
        { a[i]->f = (float)m/a[i]->w;
          m=0;
          return;
        }
    }
} 

 void display(struct node *a[],int q)
{ int i,price=0;

   printf("\nItem selected with fraction:-");
   for(i=0; i<q; i++)
   {
     if(a[i]->f > 0)
     { printf("%d -- %f\n",a[i]->name,a[i]->f);
       price= price + a[i]->p;
     }
   }
   
   printf("\n Total price:- %d",price);
} 

 int main()
{ int q,i,m;

  printf("Enter the no. of quantitys:-"); scanf("%d",&q);
  struct node *a[q],*cur;
  
  printf("Enter the details:-\n");
   for(i=0; i<q; i++)
  { cur=(struct node *)malloc(sizeof(struct node));
    cur->name=i;
    printf("%d item weight,price:-",i);
    scanf("%d %d",&cur->w,&cur->p);
    cur->up=cur->p/cur->w;
    cur->f=0;
    a[i]=cur;
  }
  printf("\nEnter the maximum weight of bag:-");  scanf("%d",&m);
  b_sort(a,q);
  printf("fsdfdsf");
  frac_knap(a,m,q);
  
  display(a,q);
 return 0;
}  
