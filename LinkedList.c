#include<stdio.h>
#include<stdlib.h>

struct node{
	int n;
	struct node *next;
};

void Add_Element(struct node **head,struct node **last){
	
	struct node *cur=NULL;
	cur=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&(cur->n));
	cur->next=NULL;
	printf("---1\n");
	if(*head==NULL){
	   *head=cur;
	   *last=cur;
	}else{
		(*last)->next=cur;
		*last=cur;
	}
}

int main(){
	int n,i;
	
	printf("Enter the no.of elements:-");
	scanf("%d",&n);
	
	struct node *head=NULL,*last=NULL;
	printf("Enter the elements:-");
	for( i=0; i<n; i++ )
	Add_Element(&head,&last);
	
	last=head;
	
	while(last!=NULL){
	printf("%d->",last->n);
	last=last->next;
	}
			
	return 0;
}
