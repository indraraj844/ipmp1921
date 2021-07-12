
class Solution {
public:
    TreeNode* precedure(TreeNode* root)
    {
        TreeNode* root1=root;
        while(root1->left)
           root1= root1->left;
        
        return root1;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)return root;
      if(root->val>key)
          root->left=deleteNode(root->left,key);
        else if(root->val<key)
             root->right=deleteNode(root->right,key);
        else
        {
            if(!root->left && !root->right)return NULL;
            else if(root->left&& !root->right)
            {
               return root->left;
            }
             else if(root->right&& !root->left)
            {
               return root->right;
            }
            else
            {
              TreeNode* prec=precedure(root->right);
                root->val=prec->val;
              root->right= deleteNode(root->right,root->val);
            }
        }
        return root;
    }
};
thankyou
