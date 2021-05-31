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
     int height(TreeNode* root)
    {if(!root)return 0;
     int lheight=height(root->left);
     int rheight=height(root->right);
     return 1+max(rheight,lheight);
    }
    void getarray(TreeNode* root,int level,int h,vector<int>&v)
    { if(!root)return;
     else if(level==h)
         v.push_back(root->val);
     getarray(root->left,level+1,h,v);
     getarray(root->right,level+1,h,v);
    }
     vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int h=height(root);
         vector<vector<int>>v;
        
        for(int i=1;i<=h;i++)
        {  vector<int>t;
            getarray(root,i,h,t);
         v.push_back(t);
        }
        return v;
    }
};
