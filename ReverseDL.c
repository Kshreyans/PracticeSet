// Reversing a double linked list
//https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list

Node* Reverse(Node* head)
{
    Node *h,*ptr,*last;
    ptr=head;
    h=last=NULL;
    
     if(head==NULL)
        return head;
    else
     {  
             while(last!=head)
             { ptr=head;
              
               while(ptr->next!=last)
                 ptr=ptr->next;
        
                  if(h==NULL)
                   {  h=ptr; 
                      ptr->next=ptr->prev;
                      ptr->prev=NULL;
                      last=ptr;
                   }
                 else
                  {
                    last=ptr->next;
                    ptr->next=ptr->prev;
                    ptr->prev=last;  
                    last=ptr;
                 }
             }
    }
   
    
    return h;
}
