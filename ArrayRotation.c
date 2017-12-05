//https://practice.geeksforgeeks.org/problems/rotate-and-delete/

#include <stdio.h>
#include <stdlib.h>

struct node{
        int n;
        struct node *next;
};

int main() {
	
	int i,n,t,j,k;
	struct node *a,*cur,*last;
	a=cur=last=NULL;
	
	scanf("%d",&t);
	
	for(i=0; i<t; i++){
	    
	    scanf("%d",&n);
	    for(j=0; j<n; j++){
	        cur=(struct node *)malloc(sizeof(struct node));
	        cur->next=NULL;
	        scanf("%d",&cur->n);  
	      
	        if(a==NULL)
	          a=cur;
	        else
	          last->next=cur;    
	        
	        last=cur;
       	      }
                           int s=n;
                           for(j=0; j<n-1; j++){
                
                           cur=a;
                                while(cur->next!=NULL)
                                 {  last=cur;
                                     cur=cur->next;
                                 }
                              last->next=NULL;
                              cur->next=a;
                              a=cur;
                          
                              if(s > j+1){
                                 cur=a;  printf("---\n");
                                    for(k=1; k<s-j-1; k++)
                                        cur=cur->next;
                                        
                                    if(cur->next->next==NULL)
                                       cur->next=NULL;
                                      else    
                                       cur->next=(cur->next)->next;
                                    
                                }else{
                                      a=a->next;
                                     }
                                s--;
                          
                                                      	       
                      }                                                                                                                      
                printf("%d \n",a->n);
                  
      }
	
	
	return 0;
}
