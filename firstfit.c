#include<stdio.h>
#include<stdlib.h>

struct node {

        int pid,
            size;
        struct node *next;    
};

struct process{

        int pid,
            status,
            size;
};

int main(){
       
        struct node *s=NULL,*last=NULL,*cur=NULL;
        int n,i;
        
        printf("Enter the no. of memory blocks:-  ");        scanf("%d",&n);
        
        
        
       for(i=0; i<n; i++){
                
                cur=(struct node *)malloc(sizeof(struct node));
                cur->pid=-1;
                cur->next=NULL;
                
                printf("Enter the size of partition %d :=   ",i+1);   scanf("%d",&cur->size);
                
                if(s==NULL)
                  s=cur; 
                 else
                  last->next=cur;
                   
               last=cur;
       }
        
       int m;
       printf("Enter no. of processes:- ");  scanf("%d",&m);
       struct process p[m+1];
        
        int val;
        for(i=1; i<=m; i++ )
        {
                printf("Enter size of %d process:-",i); scanf("%d",&val);
                p[i].pid=i;
                p[i].size=val;
                p[i].status=-1;
                
                cur=s;
                while(cur!=NULL){
                       
                        if(cur->pid==-1 && cur->size >= val )
                         { cur->pid=i;
                           p[i].status=1;
                           break;
                         }
                          
                        cur=cur->next;
                }
        }
        
         printf("\nBlock no.          process id\n");
         i=1;
        for(cur=s; cur!=NULL; cur=cur->next )
        {  
           if(cur->pid!=-1)
             printf("    %d(%d)              %d\n",i,cur->size,cur->pid);
           else 
             printf("    %d(%d)            FREE\n",i,cur->size);
                
                i++;      
        }
       
       printf("\n\nProcess not allocated\n");
       
       for(i=1; i<=m; i++)
        if(p[i].status!=1)
         printf("%d  \n",p[i].pid);
        
        return 0;
}
