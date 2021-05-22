method 1 Itrative method
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)return NULL;
        ListNode* curr=head;
        while(curr->next)
        {ListNode* next_=new ListNode();
         next_=curr->next;
         if(curr->val==next_->val)
         {
             curr->next=next_->next;
            delete(next_);
         }
         else  
           curr=next_;
        }
        return head;
        
    }
};
 method 2 recursive method
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)return head;
        head->next=deleteDuplicates( head->next);
        
        if(head->next &&head->next->val==head->val)
        {
            ListNode* res=head->next;
            delete(head);
            return res;
        }
        
        return head;
        
    }
};
thankyou
