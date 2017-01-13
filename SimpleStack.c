#include<stdio.h>
#include<stdlib.h>
 struct Node
{  int data;
   struct Node *next;
};

 struct stack
{ struct Node *top;
} ;

void push(struct stack *ptr,int data)
{
  struct Node *cur;
  cur=(struct Node *)malloc(sizeof(struct Node));
  cur->data=data;
  cur->next=NULL;
  
  if(ptr->top==NULL)
  { ptr->top=cur;
  }
  else
  { cur->next=ptr->top;
    ptr->top=cur;
  }
}

 void pop(struct stack *S)
{ struct Node *ptr=NULL;
  ptr=S->top;
  
  if(S->top!=NULL)
  { printf("%d ",S->top->data);
    S->top=S->top->next;
    free(ptr);
    return ;
  }
  printf("Stack is Empty");
  
}

 void display(struct stack S)
{ while(S.top!=NULL)
  { printf("%d  ",S.top->data);
    S.top=S.top->next;
  }
}

 int main()
{ 
   int i,n,data;
   struct stack Stack;
   Stack.top=NULL;
   
 printf("No. of data's to be inserted:-");
 scanf("%d",&n);
 
 printf("Enter the data:-");
 for(i=1; i<=n; i++)
  { scanf("%d",&data);
    push(&Stack,data);
  }

  display(Stack);
    return 1;
}








