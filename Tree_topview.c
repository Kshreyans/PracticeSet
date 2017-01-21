
// To print the top view of the tree
//https://www.hackerrank.com/challenges/tree-top-view


/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
 struct Snode
{ int data;
  struct node *next;
};

 void push(struct Snode **top,node *root)
{ 
    struct Snode *cur;
     cur=(struct Snode *)malloc(sizeof(struct Snode));
     cur->next=NULL;
    
    if(root==NULL)
        return ;
     
     if(*top==NULL)
     {
         *top=cur;
         cur->data=root->data;
     }    
     else
      {
         *top->next=cur;
          cur->data=root->data;
          *top=cur;
     }   
}

 void pop(struct Snode **top)
{ 
   struct Snode *cur;
     cur=*top;
     if(*top!=NULL)
     {
         printf("%d ",(*top)->data);
         *top=*(top)->next;
         free(cur);
     } 
 }    

 void top_view(node * root)
{   struct Snode *top;
    struct node *cur;
    
    top=NULL;
    cur=root;
    push(&top,root);
    cur=cur->left;
    while(cur!=NULL)
    {
        push(&top,cur);
        cur=cur->left;
    }
 
    while(top!=NULL)
        pop(&top);
     
       cur=root->right;
 
   while(cur!=NULL)
   {
       push(&top,cur);
       cur=cur->right;
   }     
    
   
       while(top!=NULL)
        pop(&top);
 
}

