

// To reverse a linked list             https://www.hackerrank.com/challenges/reverse-a-linked-list?h_r=next-challenge&h_v=zen

Node* Reverse(Node *head)
{
  Node *ptr,*prv,*head2=NULL;
    int i=1,n;
    ptr=head;
    
    while(ptr!=NULL)
    {ptr=ptr->next;i++;}
    n=i;
    
    for(i=1 ;i<n ;i++)
    { ptr=prv=head;
      while(ptr->next!=NULL)
          { prv=ptr;ptr=ptr->next;}
     
     if(head2==NULL)
        { head2=ptr;}
         
        if(prv!=ptr)
         {  ptr->next=prv;
            prv->next=NULL;
         }   
          else
          { head=NULL;}    
    }
    
    return head2;
}


// To delete a node in linked list        https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/submissions/code/35021883

Node* Delete(Node *head, int position)
{
  Node *ptr,*prv;
    ptr=prv=NULL;
    int i=0;
    
    if(head!=NULL)
     { 
        if(position==0)
         { ptr=head;
            head=head->next;
            free(ptr);
         }
        else
         { prv=ptr=head; 
            while(ptr!=NULL && i< position )
            {   prv=ptr;
                ptr=ptr->next;
                i++;
            }
             if(ptr!=NULL)
             { prv->next=ptr->next;
               free(ptr);   
             }  
         }   
        
     }   
    return head;
}

//  To print the elements in reverse    
//  https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/submissions/code/35022496

void ReversePrint(Node *head)
{
  if(head!=NULL)
     { ReversePrint(head->next);
        printf("%d\n",head->data);    
     }
    
       
}
