/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int size(ListNode* head)
    {
        ListNode* temp=head;
        int count=0;
        while(temp)
        {
        count++;
        temp=temp->next;}
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *curr=head,*prev=NULL,*next_=NULL;
        int count=0;
        if(size(head)<k)
            return head;
        
        while(count<k)
        {next_=curr->next;
         curr->next=prev;
         prev=curr;
         curr=next_;
         count++;
        }
        if(next_)
        {
            head->next=reverseKGroup(next_,k);
        }
            return prev;
        
    }
};
