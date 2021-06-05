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
    TreeNode* minvalue(TreeNode* root)
    {
        TreeNode* curr=root;
        while(curr && curr->left)
            curr=curr->left;
        
        return curr;
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(!root)return root;
            root->left=trimBST(root->left,low,high);
            root->right=trimBST(root->right,low,high);
        if(root->val<low)
        {
            TreeNode* temp=root->right;
            return temp;
        }
     if(root->val>high)
        {
            TreeNode* temp=root->left;
            return temp;
        }
        return root;
    }
};
