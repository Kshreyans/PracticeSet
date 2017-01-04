

// To merge two sorted linked list
//https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists


#include<stdio.h>


  struct Node
  {
     int data;
     struct Node *next;
  }
  
Node* MergeLists(Node *headA, Node* headB)
{
    Node *ptr=NULL,*head=NULL;
    
    if(headA==headB)
       return headA;
    else
      {  if(headA==NULL)
            return headB;
          
         if(headB==NULL)
            return headA;
       
       if(headA->data < headB->data)
       { ptr=headA;
         headA=headB;                                       //headB-> 1st element is less than that of A's
         headB=ptr;
       }
       head=headB;
       while(headA!=NULL && headB->next!=NULL)
       { 
           if(headB->next->data > headA->data)
            { ptr=headA->next;
              headA->next=headB->next;
              headB->next=headA;
              headA=ptr;
           }
            else
              headB=headB->next;  
       } 
        if( headA!=NULL)
        { headB=head;
            while(headB->next!=NULL)
                headB=headB->next;
            headB->next=headA;
        }
    }
    
    return head;
}



