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
    int moves=0;
    int helper(TreeNode* root)
    {
        if(!root)return 0;
        else if(!root->left && !root->right)return root->val-1;
        
        int lf=helper(root->left);
        int rf=helper(root->right);
        
        moves+=abs(lf);
        moves+=abs(rf);
        int curr=root->val;
        int total=curr+lf+rf;
        return total -1;
    }
    int distributeCoins(TreeNode* root) {
        helper(root);
        return moves;
    }
};
