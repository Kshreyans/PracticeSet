
  // Write a program to find preorder traversal

#include<stdio.h>
#include<stdlib.h>

 typedef struct Node
{ struct Node *right,*left;
  int no;
}node;

 typedef struct Stack
{ node *a[10];
  int top;
}stack;


 node* create(int k)
{ node *cur;
  cur=(node *)malloc(sizeof(node));
  cur->no=k;
  cur->right=cur->left=NULL; 
}

 void push(stack *s,node *cur)
{  if(s->top>=9)
    return;
   else
   { s->top++;
     s->a[s->top]=cur;
   }
}

 void pop(stack *s,node **p)
{ if(s->top==-1)
   return ;
  else
  { *p=s->a[s->top];
     s->top--;
  }
}


 void display(node *root)                       //Printing the preorder tarversal using stack
{ stack s; node *cur;                           // root => pointer denoting the root's tree ; s => stack for storing nodes address
  printf("preorder Travarsal  ");
 cur=root;s.top=-1;
  
  if(cur!=NULL)
  push(&s,cur);
 
   while(s.top!=-1)
  { pop(&s,&cur);
    printf("%d ",cur->no);
    if(cur->right!=NULL)
    push(&s,cur->right);
    
    if(cur->left)
    push(&s,cur->left);
  
  }
}

 int main()
{ node *root;
  root=create(1);                             //manually creation of tree (as not BST format)
  root->left=create(2);
  root->right=create(3);
  root->left->right=create(8);
  root->left->right->left=create(9);
  root->right->left=create(4);
  root->right->left->left=create(6);
  root->right->left->right=create(5);
  root->right->left->left->right=create(7);

 
  display(root);  
return 1;
}
