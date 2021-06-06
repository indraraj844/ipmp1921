
class Solution {
public:
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root)return 0;
        int ls=rangeSumBST(root->left,low,high);
        int rs=rangeSumBST(root->right,low,high);
        
        if(root->val>=low && root->val<=high)
            return ls+rs+root->val;
        else if(root->val<low)
            return rs;
        return ls;
        
    }
};
method 2
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
    void helper(TreeNode* root, int low, int high,int& sum)
    {
        if(!root)return;
        if(root->val>low)
            helper(root->left,low,high,sum);
        if(root->val<high)
            helper(root->right,low,high,sum);
        
        if(root->val>=low && root->val<=high)
            sum+=root->val;
    }
     
        
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root)return 0;
        int sum=0;
        helper(root,low,high,sum);
        return sum;
        
    }
};
thankyou
