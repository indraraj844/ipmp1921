method 1 simple recursion
not so corrrect

method 2 inorder traversal using a prev node 
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
    bool isValidBST(TreeNode* root) {
        static TreeNode* prev=NULL;
        if(root)
        {
            if(!isValidBST(root->left))
                return false;
            else if(prev && prev->val>=root->val)
                return false;
            
            prev=root;
            return isValidBST(root->right);
        }
        return true;
    }
};
not work for all cases;
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
    bool helper(TreeNode* root,int min,int max)
    {
        if(!root)return true;
        else if(root->val<min || root->val>max)return false;
        return helper(root->left,min,root->val-1)&&
              helper(root->right,root->val+1,max);
    }
    bool isValidBST(TreeNode* root) {
        if(!root)return true;
        return helper(root,INT_MIN+1,INT_MAX-1);
    }
};
intger overflow
