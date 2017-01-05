
//Removing duplicate in a sorted linked list
//https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list

Node* RemoveDuplicates(Node *head)
{
   Node *ptr,*prv;
   ptr=prv=head;
   
   while(ptr!=NULL)
   {
       if(prv->data==ptr->data)
         { prv->next=ptr->next;
           ptr=ptr->next;
         }
          else  
         { prv=ptr;
           ptr=ptr->next;
         }    
  }
       return head;
}
