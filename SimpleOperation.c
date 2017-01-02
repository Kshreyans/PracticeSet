

  struct Node
  {
     int data;
     struct Node *next;
  }

// To insert the node at the beginning

 Node* Insert(Node *head,int data)
{  Node *cur;
  cur=(Node*)malloc(sizeof(Node));
  cur->next=NULL;
  cur->data=data;
  
  if(head==NULL)
      head=cur;
   else
      { cur->next=head;
        head=cur;
      }  
  return head;
}

//To insert node at any position

Node* InsertNth(Node *head, int data, int position)
{
    Node *cur,
         *ptr; cur=ptr=NULL;
     
    int i=1;
    cur=(Node*)malloc(sizeof(Node));
    cur->data=data;
    cur->next=NULL;
    
    if(head==NULL || position==0)
        { cur->next=head;
          head=cur;
        }
    else
        { ptr=head;  
          while(ptr!=NULL && i < position)
          { ptr=ptr->next;
            i++;
          }   
          cur->next=ptr->next;
          ptr->next=cur;
        }
return head;
}


 int main()
{ Node *head=NULL;
  int n=0,i=0;
  scanf("%d",n);
  
  for(i=1; i<=n; i++)
 { head=Insert(head,data);
 
 }

}
