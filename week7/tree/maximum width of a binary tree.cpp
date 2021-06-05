class Solution {
public:
    int height(TreeNode* root)
    {if(!root)return 0;
     int lheight=height(root->left);
     int rheight=height(root->right);
     return 1+max(rheight,lheight);
    }
    int helper(TreeNode* root,int level)
    {
        if(!root)return 1;
        else if(level==1)return 1;
        return helper(root->left,level-1)
            +helper(root->right,level-1);
    }
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        int h=height(root);
        int width=0,max_width=0;
        for(int i=1;i<=h;i++)
        {
            width=helper(root,i);
            max_width=max(max_width,width); 
        }
        return max_width;
    }
};
need to change
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
    void helper(TreeNode* root,vector<int>&mp,int level
                ,int hd)
    {
        if(!root)return ;
        else if(level==1)
        {mp.push_back(hd);
       }
         helper(root->left,mp,level-1,hd-1);
         helper(root->right,mp,level-1,hd+1);
    }
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        int h=height(root);
       
        int hd;
        int max_width=0;
        for(int i=1;i<=h;i++)
        {
            hd=0;
             vector<int>mp;
            helper(root,mp,i,hd);
            sort(mp.begin(),mp.end());
            max_width=max(max_width,mp[mp.size()-1]-mp[0]);
        }
        
        return max_width;
    }
};
need to change

method 3 queue solution it will run for all cases
 int widthOfBinaryTree(TreeNode* root) {
       if (root == nullptr) return 0;
        queue<pair<TreeNode*, int>> que;
        que.push(make_pair(root, 0));
        int ans = 0;
        while (!que.empty()) {
            int size = que.size();
            int start = 0;
            int end = 0;
            for (int i = 0; i < size; ++i) {
                pair<TreeNode*, int> temp = que.front(); que.pop();
                TreeNode* node = temp.first;
                long int idx = temp.second;
                
                if (i == 0) start = idx;
                if (i == size - 1) end = idx;
                
                if (node->left != nullptr) 
                    que.push(make_pair(node->left, idx * 2 + 1));
                if (node->right != nullptr)
                    que.push(make_pair(node->right, idx * 2 + 2));
            }
            ans = max(ans, end - start + 1);
        }
        return ans;
    }
};
thankyou
