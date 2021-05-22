Node* deleteMid(Node* head)
{
    // Your Code Here
    if(!head)return NULL;
    else if(!head->next) return head;
    else 
    {
        Node *slow=head,*fast=head,*prev=NULL;
        while(fast &&fast->next)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
        free(slow);
    }
    return head;
    
    
}
