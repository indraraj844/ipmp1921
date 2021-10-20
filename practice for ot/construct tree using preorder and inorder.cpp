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
    int ind=0;
    int search(vector<int>&v,int low,int high,int key)
    {
        for(int i=low;i<=high;i++)
        {
            if(v[i]==key)return i;
        }
        return -1;
    }
    
    TreeNode* helper(vector<int>& pre,vector<int>& in,int low,int high)
    {
        
        if(low>high)return NULL;
        
        TreeNode* root=new TreeNode(pre[ind++]);
        if(low==high)return root;
        int pre_index=search(in,low,high,root->val);
        root->left=helper(pre,in,low,pre_index-1);
        root->right=helper(pre,in,pre_index+1,high);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        TreeNode* root;
        int ind=0;
        root=helper(preorder,inorder,ind,inorder.size()-1);
        return root;
    }
};
o(n^2)
  efficent 
  use map for storing index of inorder array
