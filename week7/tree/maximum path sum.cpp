
class Solution {
public:
    int helper(TreeNode* root,int &res)
    {
        if(!root)return 0;
        int l=helper(root->left,res);
        int r=helper(root->right,res);
        
        int max_single=max(max(l,r)+root->val,root->val);
        int max_top=max(max_single,l+r+root->val);
        res=max(res,max_top);
        
        return max_single;
    }
        
    int maxPathSum(TreeNode* root) {
        int res=INT_MIN;
        int l=helper(root,res);
        return res;
    }
};
