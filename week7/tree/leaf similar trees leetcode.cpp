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
    void getvector(TreeNode* root,vector<int>&v)
    {
    if(!root)return;
    else if(!root->left &&!root->right)
        v.push_back(root->val);
    getvector(root->left,v);
    getvector(root->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
      if(!root1 && !root2)return true;
      else if(!root1|| !root2)return false;
      vector<int>v1;
      vector<int>v2;
      getvector(root1,v1);
      getvector(root2,v2);
        
        if(v1.size()!=v2.size())return false;
      for(int i=0;i<v1.size();i++)
      {
          if(v1[i]!=v2[i])return false;
      }
        return true;
    }
};
thankyou
