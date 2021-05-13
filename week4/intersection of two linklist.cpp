method 1 
  using two pointer time complexity(n1+n2)
  /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB)return NULL;
        else
        {
            ListNode* curr1=headA;
            ListNode* curr2=headB;
            
            while(curr1 || curr2)
            {
                if(!curr1)
                {
                    curr1=headA;
                }
                if(!curr2)
                {
                    curr2=headB;
                }
                if(curr1==curr2)
                    return curr1;
                
                curr1=curr1->next;
                curr2=curr2->next;
                
            }
            return NULL;
        }
        
    }
};
method 2:
brute force
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB)return NULL;
        else
        {
            ListNode* curr1=headA;
            ListNode* curr2=headB;
            
            while(curr1)
            { curr2=headB;
                 while(curr2)
            {
                if(curr2==curr1)
                {
                    return curr2;
                }
                 curr2=curr2->next;    
            }
            curr1=curr1->next;
            }
            return NULL; 
                
        }
        
    }
};
method 3:
if it will be a single checking question then we can compare the 
last node and will give our final answer.
  

