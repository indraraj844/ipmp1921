void sortList(Node** head)
{
    Node* prev=(*head);
    Node* curr=(*head)->next;
    while(curr)
    {
        if(curr->data < prev->data)
         {
            prev->next=curr->next;
            curr->next=(*head);
            (*head)=curr;
            curr=prev->next;
         }
         else 
         {
              prev=curr;
              curr=curr->next;
         }
        
    }
}
gfg code 
thankyou
