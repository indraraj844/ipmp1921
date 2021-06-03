
method 1 easy way
  class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)return false;
        if(root->val==targetSum&&!root->left &&!root->right)
            return true;
        return hasPathSum(root->left,targetSum-root->val)
            ||hasPathSum(root->right,targetSum-root->val);
    }
};
method 2 using curr sum (a extra variable)
