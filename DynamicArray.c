
/* Creating a dynamic array and perform two operations depending upon user's choice i.e 1 for inserting the no. & 2nd /////////for displaying it .  https://www.hackerrank.com/challenges/dynamic-array
*/

#include <stdio.h>
#include<stdlib.h>
 struct node
{ int no;
  struct node *next;
};

 int XOR(int a,int b)                                                   // for calulation of XOR function
{ int i,a1,b1,k,c=1,num=0;
  
   for(i=0 ;(a!=0)||(b!=0) ;i++ )
   { 
     a1=a%2;b1=b%2;
     if(a1!=b1)
     { k=i;c=1;
       while(k>0)
       {c=c*2;k--;}
      num= c + num;
     } 
      a=a/2; b=b/2; 
   }
 return num;                                                    // returning the xor value
}


 int main()
{ int n,                                                        // no. of sequences
       q,                                                       // no. of query
       i,                                                       // loop counter                                               
       choice,                                                  // for switch case 
       x,                                                       // for input
       num,                                                     // no. to be inserted
       lastAns=0,
       j,                                                       // counter variable
       seq;                                                     // variable for locating seq no. in pointer array
       
  scanf("%d %d",&n,&q);
  struct node *p[n],                                            // pointer array of n sequences to store input
              *ptr,                                             // navigation in sequence       
              *cur;                                             // store the address of dynamically created node
              ptr=cur=NULL;
  
  for(i=0;i<n;i++)
  p[i]=NULL;
  
  for(i=0 ;i< q; i++)
  { scanf("%d %d %d",&choice,&x,&num);
    
     switch(choice)
    { 
      case 1: seq = XOR(x,lastAns);
              seq= seq % n;
              cur=(struct node*)malloc(sizeof(struct node));
              cur->next=NULL;
              cur->no=num;
            
               if(cur!=NULL)  
              {   if(p[seq]==NULL)
                { p[seq]=cur;
                 }  
                 else
                 { ptr=p[seq];
                   while(ptr->next!=NULL)
                   ptr=ptr->next;
                   ptr->next=cur;  
                 } 
              }
              break;
              
      case 2: seq= XOR(x,lastAns);    
              seq=seq%n;
              j=0;ptr=p[seq];
              if(ptr!=NULL)
               {
                while(j<num)
                 { ptr=ptr->next;
                   j++;
                 }
               
                lastAns=ptr->no;
                printf("%d\n",lastAns);
             }
             break; 
    }
  } 
return 0;    
}

