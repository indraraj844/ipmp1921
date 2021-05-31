method 1 simple o(n^2)
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
    void getarray(TreeNode* root,int level,vector<int>&v)
    { if(!root)return;
     else if(level==1)
         v.push_back(root->val);
     getarray(root->left,level-1,v);
     getarray(root->right,level-1,v);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int h=height(root);
         vector<vector<int>>v;
        
        for(int i=1;i<=h;i++)
        {  vector<int>t;
            getarray(root,i,t);
         v.push_back(t);
        }
        return v;
    }
};
method 2 using a queue
but we can't take it to in a queue;
