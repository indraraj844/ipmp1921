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
    TreeNode* minvalnode(TreeNode* root)
    {
        TreeNode* curr=root;
        while(curr && curr->left)
            curr=curr->left;
        
        return curr;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)return root;
        else if(root->val>key)
            root->left=deleteNode(root->left,key);
        else if(root->val<key)
            root->right=deleteNode(root->right,key);
        else
        {
            if(!root->right &&!root->left)return NULL;
            else if(!root->right)
            {
                TreeNode* temp=root->left;
                free(root);
                return temp;
            }
            else if(!root->left)
            {
                TreeNode* temp=root->right;
                free(root);
                return temp;
            }
            
          TreeNode* temp=minvalnode(root->right);
            root->val=temp->val;
           root->right=deleteNode(root->right,temp->val);
        }
        return root;
    }
};
need to change
