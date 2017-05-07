#include<stdio.h>
#include<stdlib.h>
 
 struct node
{ int val,
      index;
}; 

  int n;
  
 void sort(struct node* a[])
{ int i,j;
  struct node *temp;
  
   for(i=1; i<=n; i++)
  { 
        for(j=1; j<=n-1; j++)
        { 
           if(a[j]->val < a[j+1]->val)
           { temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
           }
            
        }
  }
  
} 


 int main()
{ 
  printf("Enter the no. of coins:-");
  scanf("%d",&n);
  
  struct node *cur,*a[n];
  int i,j,k,f;
  int x[n];
  
  printf("Enter the values of coins:-");
  for(i=1;i<=n;i++)
  { cur=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&cur->val);
    cur->index=i;
    a[i]=cur;
    x[i]=0;  
  }
    
    sort(a);
 
    for(i=1; i<=n; i++)
    printf("         %d",a[i]->val);
    printf("\n");
 
 
 x[1]=1;k=1;
 
 
 
  for(i=2; i<=n; i++)
  { f=0;
       for(j=1; j<=k; j++)
       { 
          if( i!=x[j] && abs(a[x[j]]->index - a[i]->index)==1)
           f=1;
       }  
       
     if(f==0)
     { k++;
       x[k]=i;  
    }
  }     
  
  
    f=0;
     for(i=1; i<=k; i++)
    { f=f+a[x[i]]->val; 
       printf("         %d",a[x[i]]->val);
    }
    
    printf("\nprofit:-    %d\n",f);
 return 0; 
}









