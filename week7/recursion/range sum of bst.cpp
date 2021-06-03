
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
thankyou
