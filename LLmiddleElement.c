//https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1

int getMiddle(Node *head)
{
  int i,j;
  Node *ptr1,*ptr2;
        ptr1=ptr2=head;
    i=j=1;
    
    if( ptr1==NULL )
    return -1;
    
        while( ptr1!=NULL ){
            
            while( j< ( i/2 + 1 ) ){
                ptr2=ptr2->next;
                 j++;
               
            }
            ptr1=ptr1->next;
            i++;
        }
    
      
    return ptr2->data;
}

