/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxAncestorDiff(TreeNode* root) {
        
        int ans=0;
        queue<TreeNode* >q;
        queue<pair<int,int>>v;
        
        q.push(root);
        v.push({root->val,root->val});
        
        int min_val,max_val;
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            min_val=v.front().first;
            max_val=v.front().second;
            v.pop();
            ans=max(ans,abs(max_val-min_val));
            if(temp->left)
            {
                q.push(temp->left);
                v.push({min(min_val,temp->left->val),max(max_val,
                                                         temp->left->val)});
            }
            if(temp->right)
            {
                q.push(temp->right);
                v.push({min(min_val,temp->right->val),max(max_val,
                                                        temp->right->val)});
            }
        }
        return ans;
    }
};
