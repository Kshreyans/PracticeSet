#include<stdio.h>
#include<stdlib.h>

struct node{
	int n;
	struct node *next;
};

typedef struct x{
	struct node *top;
}stack;

void element_push(stack *s){
		
	 struct node *cur=(struct node *)malloc(sizeof(struct node));
	 if( cur!=NULL ){		
	   printf("Enter the number:");
	   scanf("%d",&(cur->n));
	   cur->next=s->top;
	   s->top=cur;
	  }else
	  printf("Overflow\n"); 
}

void element_pop(stack *s,struct node **ptr){
	
	if( s->top!=NULL ){
		*ptr=s->top;
		s->top=s->top->next;     	
	}else{
		printf("Underflow\n");
	}
}


int main(){
	int i;
	stack s;
	s.top=NULL;
	struct node *ptr=NULL;
	
	printf("1.push\n2.pop\n3.Exit\n choice:");	
	scanf("%d",&i);
	
	while(i!=3){
		switch(i){
		case 1:element_push(&s);
			break;
		case 2:element_pop(&s,&ptr);
			 if(ptr!=NULL){
			   printf("%d",ptr->n);
			   free(ptr);
			 }
			break;
		case 3:while(s.top!=NULL){
			  element_pop(&s,&ptr);
			  if(ptr!=NULL){
			   free(ptr);
			   printf("%d",ptr->n);
			  }
			}
			break;		
		}
	  printf("Enter choice:");
	  scanf("%d",&i);
	}
	return 0;
}
