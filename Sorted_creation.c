
//To insert elements in a sorted manner while input
//https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list

Node* SortedInsert(Node *head,int data)
{
  Node *cur,*ptr;
        cur=ptr=NULL;
    
    cur=(Node *)malloc(sizeof(Node));
    cur->next=cur->prev=NULL;
    cur->data=data;
    
    if(head==NULL)
      head=cur;
    else
      {  
        if(head->data > data)
         {  cur->next=head;
            head->prev=cur;
            head=cur;
         }
        else
         {   ptr=head;
             
             while((ptr->next!=NULL) && (ptr->data < data))
                ptr=ptr->next;
          
          if(ptr->data > data)
            {  cur->next=ptr;
               cur->prev=ptr->prev;
               
               if(cur->prev!=NULL)
                 cur->prev->next=cur;
                 ptr->prev=cur; 
             }
            else
            {  cur->next=ptr->next;
               cur->prev=ptr;

               if(ptr->next!=NULL)
                   ptr->next->prev=cur;
               ptr->next=cur;
              
             }
        }   
    }
    return head;
}

