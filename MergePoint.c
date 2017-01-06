int FindMergeNode(Node *headA, Node *headB)
{
   Node *ptr=NULL;
    
    while(headA!=NULL && headB!=NULL)
        { ptr=headB;
           
           while(ptr!=NULL)
            { if(ptr==headA)
                return ptr->data;
              ptr=ptr->next;
            }        
        headA=headA->next;
        }
    return 0;
}
