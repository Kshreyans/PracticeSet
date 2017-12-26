#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
        int f;
        char c;
        struct node *next;
};

int remove1(char *s,char c,int n){

        int i,j,k;
        
        for(i=0; i<n; i++){
                
                if(s[i]==c){
                        
                        for( j=i; s[j]==c; j++);
                        
                        for( k=i; k<n-(j-i); k++){
                                s[k]=s[k+j-i];
                        }
                         n=n-(j-i);
                         s[n]='\0';   
                }
        }

    return n;    
}
 
struct node * CalFreq(struct node *freq,char *s,int n){

        struct node *cur,*last;
        last=cur=NULL;
        int k;
        
                        freq=(struct node *)malloc(sizeof(struct node));
                        freq->next=NULL;
                        freq->f=1;
                        freq->c=s[0];
                        last=freq;
             
        for(int i=1; i<n; i++){
                
                cur=freq;k=0 ;
                while(cur!=NULL){
                        
                        if(cur->c==s[i]){
                                cur->f++; k=1;
                                break;        
                        }
                     cur=cur->next;   
                }
                
                if(k==0){
                  cur=(struct node *)malloc(sizeof(struct node));
                  cur->next=NULL;
                  cur->c=s[i];
                  cur->f=1;
                  last->next=cur;
                  last=cur;
                } 
        }
        
        
 return freq;
} 

void sort(struct node* freq){

        struct node *ptr1,*ptr2;
        ptr1=ptr2=NULL;
        int f; char c;
        ptr1=freq;
        while(ptr1!=NULL){
                ptr2=freq;
                while(ptr2->next!=NULL){
                
                        if(ptr2->f < ptr2->next->f ){
                                f=ptr2->f;
                                c=ptr2->c;
                                ptr2->f=ptr2->next->f;
                                ptr2->c=ptr2->next->c;
                                ptr2->next->c=c;
                                ptr2->next->f=f;
                        }
                    ptr2=ptr2->next;
                }
              ptr1=ptr1->next;  
        }
}



int main(){

        int n,i,max=-1,count=0;
        struct node * freq=NULL,*ptr=NULL;        
        
        scanf("%d",&n);
        char *s=(char *)malloc(sizeof(char)*n);
        scanf("%s",s);
        
        
        for( i=0; i< n-1; i++){
        
                if(s[i]==s[i+1]){
                       n=remove1(s,s[i],n);
                }        
        }
        
         printf("\n%s\n",s);        
        freq=CalFreq(freq,s,n);       
     
                             
       sort(freq); 
       
       if( n > 1 && ( freq->f - freq->next->f == 1 || freq->f - freq->next->f == 0) )
         printf("%d\n",freq->f + freq->next->f);
       else
         printf("0\n");          
                
       ptr=freq;
        while(ptr!=NULL){
                printf("f-%d    c=%c    \n",ptr->f,ptr->c);
                ptr=ptr->next;
        }
        
        return 0;
}
