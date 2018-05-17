#include<stdio.h>
#include<stdlib.h>


struct node {
	int n;
	struct node *next;
};

void insert_element(struct node **head){
	int pos,i=1;
	
	struct node *ptr=*head,*cur=NULL;
	cur=(struct node *)malloc(sizeof(struct node));
	printf("Enter the element and position:");
	scanf("%d  %d",&(cur->n),&pos);
	if(pos==1){
		cur->next=*head;
		*head=cur;
	}else{
	
	    for( i=1; i<pos-1; i++)
	      ptr=ptr->next;
		
		cur->next=ptr->next;
		ptr->next=cur;	
	}
}

void Add_Element(struct node **head,struct node **last){
	
	struct node *cur=NULL;
	cur=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&(cur->n));
	cur->next=NULL;
	
	if(*head==NULL){
	   *head=cur;
	   *last=cur;
	}else{
		(*last)->next=cur;
		*last=cur;
	}
}

void delete_element(struct node **head){
	struct node *ptr=*head;
	int pos,i;
	
	if( *head==NULL ){
		printf("Linked List already empty \n");
		return;
	}else{
		printf("Enter  the position for deletion:");
		scanf("%d",&pos);
		
		if( pos == 1 ){
			if( ptr->next == NULL )
			 return ;
			else{
				*head=(*head)->next;
				free(ptr);	
				return;		
			} 		
		}else{
			for( i=1; i<pos-1; i++ )
			  ptr=ptr->next;
			
			ptr->next=ptr->next->next;
		}
	}
	
}
 
void disp1(struct node *head){
	
	
	while(head!=NULL){
	printf("%d  ",head->n);
	head=head->next;
	}
	
}

int main(){
		
	struct node *head=NULL,*last=NULL;
	int i,n;
	scanf("%d",&n);
	for(i=0; i<n; i++)		
		Add_Element(&head,&last);
	
	disp1(head);
	printf("-1 for Exit \nchoice:");

	while(i!=-1)
	{ insert_element(&head);
		disp1(head);
		printf("Choice:");
	  scanf("%d",&i);
	}
	
	printf("-1 for Exit \nchoice:");
	i=10;
	while(i!=-1)
	{ delete_element(&head);
		disp1(head);
		printf("Choice:");
	  scanf("%d",&i);
	}	
	return 0;
}
