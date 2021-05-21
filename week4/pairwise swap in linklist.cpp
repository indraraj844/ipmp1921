method 1 
  swaping data of nodes
  method 2:
change in  pointer:
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
    ListNode* swapPairs(ListNode* head) {
        if(!head ||!head->next)return head;
        ListNode *curr=head->next,*prev=head;
          head=curr;
           while(true)
        {
               ListNode* next=curr->next;
               curr->next=prev;
               if(!next ||!next->next)
               {
                prev->next=next;
               break;
               }
               prev->next=next->next;
               prev=next;
               curr=prev->next;
        
        }
        return head;
    }
};
method 3 
  recursive approch
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
    ListNode* swapPairs(ListNode* head) {
        if(!head ||!head->next)return head;
        ListNode *next=head->next->next;
        head->next->next=head;
        ListNode* newhead=head->next;
        head->next=swapPairs(next);
        return newhead;
    }
};
