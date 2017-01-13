
  // Write a program to find number of nodes in a binary tree.

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

int n=0,a=-1;

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
 void display(node *root)
{ stack s; node *cur,*p;
  cur=root;s.top=-1;
  if(cur!=NULL)
 {  while(cur!=NULL)
   {  push(&s,cur);
      cur=cur->left;
   }
  printf("Inorder Travarsal");
 
   while(s.top!=-1)
  { pop(&s,&p);
    printf("%d  ",p->no);
    cur=p->right;
     while(cur!=NULL)
    { push(&s,cur);
      cur=cur->left;
    }
  }   
 }
   
}

 void call1(node *root)
{ 

  if(root->left!=NULL)
   {a++;call1(root->left);}
  if(root->right!=NULL)
   {
    if(root->left!=NULL)a--;
    a++;call1(root->right);}
   if(a>n)
    n=a;
}

int height(node *r)
{
 int h1,h2,h;
 if(r!=NULL)
 {
  if(r->right!=NULL && r->left!=NULL)
  {
   h1=height(r->right)+1;
   h2=height(r->left)+1;
   if(h1>h2)
   return h1;
   else
   return h2;
  }
  else if(r->right==NULL && r->left==NULL)
       return 0;
  else if(r->right==NULL)
       {h=height(r->left)+1;return h;}
  else if(r->left==NULL)
       {h=height(r->right)+1;return h;}
  }
  else
       return 0;
}
  
  void leaf(node *root)
 {   if(root->right!=NULL) 
     leaf(root->right);
    
     if(root->left!=NULL)
     leaf(root->left);
      
     if(root->left!=NULL && root->right!=NULL)
    {n++;}
 } 

 int main()
{ node *root;
  root=create(1);
  root->left=create(2);
  root->right=create(3);
  root->left->right=create(8);
  root->left->right->right=create(12);
  
  root->left->right->right->right=create(14);
  root->left->right->right->right->right=create(15);
  root->left->right->left=create(9);
  root->right->left=create(4);
  root->right->left->left=create(6);
  root->right->left->right=create(5);
  root->right->left->left->right=create(7);

  printf("Inorder traversal\n");
  display(root);

//  call1(root);
  //printf("\nThe height of the tree:-%d\n ",n);
 // printf("Height=%d\n",height(root));

  leaf(root);
  printf("The no. of leaf nodes:-%d\n",n);
return 1;
}
