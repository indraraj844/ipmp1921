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
    ListNode* merge(ListNode* a,ListNode* b)
    {
        ListNode* res=NULL;
        if(!a)return b;
        else if(!b)return a;
        if(a->val>=b->val)
        {
            res=b;
           res->next=merge(a,b->next);
        }
        else
        {
            res=a;
            res->next=merge(a->next,b);
        }
        return res;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        
        ListNode* res=NULL;
        for(int i=0;i<n;i++)
        {
            res=merge(res,lists[i]);
        }
        return res;
    }
};
