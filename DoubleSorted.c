//Inserting in double linked list in sorted order.

#include<stdio.h>
#include<stdlib.h>

 struct node
{
        int no;
        struct node *nxt;
        struct node *prev;
};


 void creation(struct node **h,int v)
{       struct node *cur,*ptr;
        cur=(struct node *)malloc(sizeof(struct node));
        cur->nxt=cur->prev=NULL;
        cur->no=v;
        
           if((*h)==NULL)
             *h=cur;
          else
            { ptr=*h;
            
              while(ptr->nxt!=NULL) 
                 ptr=ptr->nxt;
  
                 ptr->nxt=cur;
                 cur->prev=ptr;
            }    
}

 void insert_node(struct node **h,int data)
{       struct node *cur,*ptr;
          cur=ptr=NULL;
    
    cur=(struct node *)malloc(sizeof(struct node));
    cur->nxt=cur->prev=NULL;
    cur->no=data;
    
    if(*h==NULL)
      *h=cur;
    else
      {  
        if((*h)->no > data)
         {  cur->nxt=(*h);
            (*h)->prev=cur;
            *h=cur;
         }
        else
         {   ptr=*h;
             
             while((ptr->nxt!=NULL) && (ptr->no < data))
                  ptr=ptr->nxt;
          if(ptr->nxt!=NULL)
          {  cur->nxt=ptr;
             cur->prev=ptr->prev;
             cur->prev->nxt=cur;
             ptr->prev=cur; 
             
          }
          else
          { cur->nxt=ptr->nxt;
            cur->prev=ptr;
            ptr->nxt=cur;
          }
         }   
    }
}

 void display(struct node *head)
{     while(head!=NULL)
       { printf("%d->",head->no);
         head=head->nxt;
       } 

}

 int main()
{ 
  int i,n,data;
  struct node *head=NULL;
  
  printf("Enter the no. of nodes to be inserted:-");
  scanf("%d",&n);
  
  printf("Enter the linked list:-");
  for(i=1; i<=n; i++)
    {    scanf("%d",&data);               
         creation(&head,data);
     }   
   
   display(head);
   
   printf("\nEnter the no. of elements to be inserted:-");
   scanf("%d",&n);
   printf("Enter the no.'s:-");
   
   for(i=1; i<=n; i++)
    {   scanf("%d",&data);
        insert_node(&head,data);
    } 
     display(head);
   return 1; 
}
