method 1 using stack
method2:
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
    bool isPalindrome(ListNode* head) {
        if(!head)return true;
        if(!head->next)return true;
        if(!head->next->next) return head->val==head->next->val;
        
        ListNode *slow=head,*fast=head->next;
        while(fast &&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode *curr=slow->next,*prev=NULL,*next=NULL;
        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        slow->next=prev;
        ListNode *curr1=head,*curr2=slow->next;
        ListNode* mid;
        if(fast)
        {mid=slow->next;
        }
        
        else
        {
            mid=slow;
        }
        
        if(mid)
        {
             while(curr1!=mid&&curr2)
        {
            if(curr1->val!=curr2->val)
                return false;
            curr1=curr1->next;
            curr2=curr2->next;
            
        }
        }
        return true;
        
    }
};
