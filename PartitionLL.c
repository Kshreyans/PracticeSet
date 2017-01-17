

//http://www.geeksforgeeks.org/partitioning-a-linked-list-around-a-given-value-and-keeping-the-original-order/
//To partition a given linked list


#include<stdio.h>
#include<stdlib.h>

 typedef struct node
{ int data;
  struct node *next;
}Node;

 void creation(Node **head)
{ Node *cur,*last;
  last=cur=NULL;
  int n,i;
  
  printf("Enter the nodes to be created:-");
  scanf("%d",&n);
  printf("Enter the no.'s");
  
  for(i=1; i<=n; i++)
   { cur=(Node  *)malloc(sizeof(Node));
     scanf("%d",&cur->data);
     cur->next=NULL;
     
     if(*head==NULL)
       { *head=cur;
          last=cur;
       }
      else
      { last->next=cur;
        last=cur;
      }      
   }  
} 

 void partition(Node *head,Node **h1)
{ int n;
   Node *h2,*h3,*ptr;
     h2=h3=ptr=NULL;
  
  printf("Enter the partioning element:-");
  scanf("%d",&n); 
   if(head==NULL)
     return ; 
    else
    {    while(head->next!=NULL)
          { 
              if(head->data < n)
               {   if(*h1==NULL)
                   { *h1=head;
                      head=head->next;
                     (*h1)->next=NULL; 
                   }
                   else
                   { ptr=*h1;
                      while(ptr->next!=NULL)
                       ptr=ptr->next;
                                               
                       ptr->next=head;
                       head=head->next;
                       ptr->next->next=NULL; 
                   }
               }
               else
               if(head->data > n)
               {   if(h2==NULL)
                   { h2=head;
                      head=head->next;
                     h2->next=NULL; 
                   }
                   else
                   { ptr=h2;
                      while(ptr->next!=NULL)
                       ptr=ptr->next;
                                               
                       ptr->next=head;
                       head=head->next;
                       ptr->next->next=NULL; 
                   }
               }
               else
               if(head->data == n)
               {   if(h3==NULL)
                   { h3=head;
                      head=head->next;
                     h3->next=NULL; 
                   }
                   else
                   { ptr=h3;
                      while(ptr->next!=NULL)
                       ptr=ptr->next;
                                               
                       ptr->next=head;
                       head=head->next;
                       ptr->next->next=NULL; 
                   }
               }
                 
          }
    }
    
      ptr=*h1;
      while(ptr->next!=NULL)
      ptr=ptr->next;
      ptr->next=h3;
      
      ptr=*h1;
      while(ptr->next!=NULL)
      ptr=ptr->next;
      ptr->next=h2; 
}


 void display(Node *h)
{ 
   while(h!=NULL)
   { printf("%d ",h->data);
     h=h->next;
   }
   printf("\n");
}
   
 int main()
{ 
 Node *h,
      *h1;
      
  h1=h=NULL;    
      
  creation(&h);
  display(h);
  partition(h,&h1);
  display(h1);
return 1;
} 
