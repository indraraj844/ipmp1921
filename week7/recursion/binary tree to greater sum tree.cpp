method 1 
  get the total sum and now traverse according to inorder traversal
class Solution {
public:
    int getsum(TreeNode* root)
    {
        if(!root)return 0;
        return root->val+getsum(root->left)
            +getsum(root->right);
    }
    void helper(TreeNode* root,int& sum)
    {
        if(!root)return;
        helper(root->left,sum);
        int old_val=root->val;
        root->val=sum;
        sum-=old_val;
        helper(root->right,sum);
        
    }
    TreeNode* bstToGst(TreeNode* root) {
       int sum=getsum(root);
         helper(root,sum);
        return root;
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
    void helper(TreeNode* root,int& sum)
    {
        if(!root)return;
        helper(root->right,sum);
       int old_val=root->val;
        root->val+=sum;
        sum+=old_val;
        helper(root->left,sum);
        
    }
    TreeNode* bstToGst(TreeNode* root) {
        int sum=0;
         helper(root,sum);
        return root;
    }
};
slight change traverse 
first root->right,root,root->left;
thankyou
