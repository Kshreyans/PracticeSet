#include<stdio.h>
#include<stdlib.h>

struct node{
	int n;
	struct node *next;
};

typedef struct x{
	struct node *front,
			*rear;
}queue;

void enqueue(queue *q){
	struct node *cur=(struct node *)malloc(sizeof(struct node));
	if( cur!=NULL ){
		printf("Enter the element:-");
		if( q->rear==NULL )
		   q->rear=q->front=cur;
		else
		   { q->rear->next=cur;
			q->rear=cur;
		   }	
			scanf("%d",&(cur->n));
			cur->next=NULL;
		
	}else
	printf("Queue Full\n");
}

void dequeue(queue *q,struct node **ptr){
	
	if( q->front!=NULL ){
		if( q->front == q->rear ){
			*ptr=q->front;
			q->front=q->rear=NULL;
		}else{
			*ptr=q->front;
			q->front=q->front->next;
		}
	}else
	  printf("Queue Empty\n");
	
}

int main(){
	
	int ch=1;
	printf("1.Enqueuen\n2.Dequeue\n3.Exit");
	queue q={NULL,NULL};
	struct node *ptr=NULL;
	while(ch!=3){
		printf("Enter your choice:- ");
		scanf("%d",&ch);
		
		switch(ch){
			case 1:enqueue(&q);
				break;
			case 2:dequeue(&q,&ptr);
				 if(ptr!=NULL)
				 { printf("dequeued element:- %d \n",ptr->n);
				   free(ptr);
				 } 
				break;
			case 3:while(q.front!=NULL){
				 dequeue(&q,&ptr);
				  if(ptr!=NULL)
				  { printf("dequeued element:- %d \n",ptr->n);
				    free(ptr);
				  }  
				 }
				break;			
		}
	}
	return 0;
}
