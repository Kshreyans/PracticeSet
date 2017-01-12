// Reversing a double linked list
//https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list

Node* Reverse(Node* head)
{
    Node *h,*ptr,*last;
    ptr=h=last=NULL;
    
    if(head==NULL)
        return head;
    else
     { ptr=head;
        
        if(h==NULL)
          { while(ptr->next!=NULL)
              ptr=ptr->next;
            h=ptr;
            ptr->next=ptr->prev;
            ptr->prev->next=NULL;
            ptr->prev=NULL;
            last=ptr;
          }   
         else
          { 
             while(ptr!=NULL)
             { ptr=head;
              
               while(ptr->next!=NULL )
                 ptr=ptr->next;
              
                ptr->prev->next=NULL;
                ptr->next=ptr->prev;
                ptr->prev=last;
                
             }
         }   
        
    }
    return h;
}

