method 1 using recursion
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
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        
        int lheight=height(root->left);
        int rheight=height(root->right);
        int ldiameter=diameterOfBinaryTree(root->left);
        int rdiameter=diameterOfBinaryTree(root->right);
        
        return max(lheight+rheight,max(ldiameter,rdiameter));
    }
};
o(n^2)
  
  method 2
  o(n)
  we will use same loop for height
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
    int helper(TreeNode* root,int* height)
    { 
        int lh=0,rh=0,ld=0,rd=0;
        if(!root)
        {
            *height=0;
            return 0;
        }
        ld=helper(root->left,&lh);
        rd=helper(root->right,&rh);
        *height=max(lh,rh)+1;
        return max(rh+lh,max(ld,rd));
        
        return max(lh+rh,max(ld,rd));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int h=0;
        return helper(root,&h);
        
    }
};
thankyou
  
  
