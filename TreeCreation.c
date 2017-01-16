#include<stdio.h>
#include<stdlib.h>
struct Node
{ int data;
  struct Node *right;
  struct Node *left;
};

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







 int main()
{ int n,i;
  struct Node *head=NULL;
  printf("Enter the no. of Nodes to be entered:-");
  scanf("%d",&n);
  printf("Enter the data's:-");
  
  for(i=1; i<=n; i++)
    CreateTree(&head);
  
  return 1;
}
