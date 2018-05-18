#include<stdio.h>
#include<stdlib.h>

struct node{
	int n;
	struct node *next,
			*prv;	
};

void addElements(struct node **head){
	int n;
	struct node *cur=NULL;
	
	cur=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&(cur->n));
	cur->next=cur->prv=NULL;
	
	
	if(*head==NULL){
		*head=cur;
		cur->next=*head;
		cur->prv=*head;
	}else{
		cur->next=*head;
		cur->prv=(*head)->prv;
		(*head)->prv->next=cur;
		(*head)->prv=cur;
	}
	
}

void insert_element(struct node **head){
	struct node *cur,*ptr;
	int pos,i;
	
	cur=(struct node *)malloc(sizeof(struct node));
	cur->next=cur->prv=NULL;
	printf("Enter the element & position:");
	scanf("%d%d",&(cur->n),&pos);
	
	if(*head == NULL ){
		*head=cur;
		cur->next=*head;
		cur->prv=*head;
	}else{
		
		if( pos==0 ){
			cur->next=*head;
			cur->prv=(*head)->prv;
			(*head)->prv->next=cur;
			(*head)->prv=cur;
		}else{
			ptr=*head;
			
			for( i=1; i<pos-1; i++ )
				ptr=ptr->next;
			
			cur->next=ptr->next;
			cur->prv=ptr;
			ptr->next->prv=cur;
			ptr->next=cur;
		}	
	}
	 
}

void dispLR(struct node *head){
	struct node *ptr=head;
	
	while(ptr->next!=head){
		printf("%d  ",ptr->n);
		ptr=ptr->next;
	}
	
	printf("%d ",ptr->n);
}

void dispRL(struct node *head){
	struct node *ptr=head;
	
	while(ptr->prv!=head){
		printf("%d  ",ptr->n);
		ptr=ptr->prv;
	}
	printf("%d ",ptr->n);
}

int main(){
	int n;
	
	printf("Enter the no. of elements you want to add:");
	scanf("%d",&n);
	
	struct node *head=NULL;
	
	printf("Enter the elements:");
	while(n--){
	addElements(&head);
	printf("%d \n",5-n);
	}
	
	dispLR(head);
	printf("\n");
	dispRL(head);	
	
	insert_element(&head);
	
	dispLR(head);
	printf("\n");
	dispRL(head);	
	
	return 0;
}
