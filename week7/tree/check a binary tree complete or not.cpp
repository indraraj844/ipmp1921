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
    bool isCompleteTree(TreeNode* root) {
        if(!root)return true;
        queue<TreeNode*>q;
        q.push(root);
        bool flag=false;
        while(!q.empty())
        {TreeNode* t=q.front();
         q.pop();
         if(t->left)
         {
             if(flag)
             {
                 return false;
             }
             q.push(t->left);
         }
         else
             flag=true;
         
         if(t->right)
         {
             if(flag)
             {
                 return false;
             }
             q.push(t->right);
         }
         else
             flag=true;
            
        }
        return true;
    }
};
o(n)
 s(n)
