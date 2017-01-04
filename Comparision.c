
// To compare 2 linked list if equal return 1 else 0;
//https://www.hackerrank.com/challenges/compare-two-linked-lists

int CompareLists(Node *headA, Node* headB)
{
  if(headA==NULL || headB==NULL)
    return 0;
   else
    { if(headA==headB)
        return 1;
     
      while(headA!=NULL && headB!=NULL)
       { 
         if(headA->data!=headB->data)
             return 0;
          else
            { headA=headA->next; headB=headB->next; }  
       }
         
         if(headA==headB)
             return 1;
         else 
             return 0;
       
    }   
}
