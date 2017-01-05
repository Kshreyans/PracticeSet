
// print pth element from back
//https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail

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


int GetNode(Node *head,int positionFromTail)
{ int i=0;
    head=Reverse(head);
    
    for(i=0 ;i< positionFromTail ;i++)
        head=head->next;
    
  return head->data;
}

