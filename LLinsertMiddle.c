

Node* insertInMiddle(Node* head, int x)
{
	Node *ptr;
	ptr=head;
	
	int i=0,mid;
	
	while( ptr!=NULL ){
	    ptr=ptr->next;
	    i++;
	}
	
	if( i%2 == 0 )
	  mid=i/2;
	 else
	  mid=i/2 + 1;
    
   
    i=1;
    while( i<mid ){
        ptr=ptr->next;
        i++;
    }
    
    Node *cur=(Node *)malloc(sizeof(Node));
    cur->data=x;
    cur->next=ptr->next;
    ptr->next=cur;
    
    return head;    
}
