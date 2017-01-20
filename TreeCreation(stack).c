#include<stdio.h>
#include<stdlib.h>
struct Node
{ int data;
  struct Node *right;
  struct Node *left;
};


 struct Snode
{  struct Node *add;
   struct Snode *next;
};

 struct stack
{ struct Snode *top;
};


void push(struct stack *S,struct Node *add)
{
  struct Snode *cur;
  cur=(struct Snode *)malloc(sizeof(struct Snode));
  cur->add=add;
  cur->next=NULL;
  
  if(S->top==NULL)
  { S->top=cur;
  }
  else
  { cur->next=S->top;
    S->top=cur;
  }
}

 void pop(struct stack *S,struct Node **cur)
{ struct Snode *ptr;
  
  ptr=S->top;
  if(S->top!=NULL)
  { 
    printf("%d ",S->top->add->data);
    *cur=S->top->add;
    
    S->top=S->top->next;
    free(ptr);
    return ;
  }
  printf("Stack is Empty");
  
}


 void CreateTree(struct Node **head)
{ struct Node *ptr,*cur;
  ptr=cur=NULL; int ch=0;
  
  cur=(struct Node*)malloc(sizeof(struct Node));
  scanf("%d",&cur->data);
  cur->left=cur->right=NULL;
  
   if(*head==NULL)
     *head=cur;
   else
    { ptr=*head;
      
       while(1)
       { 
         if(ptr->data==cur->data)
           { printf("No. already present/n"); return ;}
         else
          if(cur->data > ptr->data)
            { if(ptr->right!=NULL)
               ptr=ptr->right;
              else
              { ch=2; break;} 
            }
          else
          if(ptr->left!=NULL)
             ptr=ptr->left;
            else
           { ch=1; break;}
       }
       
      if(ch==1)
       ptr->left=cur;
      else
       ptr->right=cur;    
           
    } 
}

 void Preorder(struct Node *h)
{ struct stack S;
  struct Node *cur=NULL;
   S.top=NULL;
   cur=h;
   
  if(h==NULL)
    {printf("Empty\n"); return;}
   else
   { push(&S,h);
     //while(S.top!=NULL)
   //  { pop(&S,&cur);
      
      push(&S,cur->right);
      push(&S,cur->left);
     //} 
   }
}  

 void display(struct Node *head)
{ 
   if(head!=NULL)
   { 
     display(head->left);
     printf("%d ",head->data);
     display(head->right);
   }
} 


 int main()
{ int n,i;
  struct Node *head=NULL;
  printf("Enter the no. of Nodes to be entered:-");
  scanf("%d",&n);
  printf("Enter the data's:-");
  
  for(i=1; i<=n; i++)
    CreateTree(&head);
  
  display(head);
  Preorder(head);  
  return 1;
}
