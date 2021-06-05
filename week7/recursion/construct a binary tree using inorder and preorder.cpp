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
    int search(vector<int>&v,int start,int end,int value)
    {
        for(int i=start;i<end+1;i++)
        {
            if(v[i]==value)
                return i;
        }
        return -1;
    }
    TreeNode* helper(vector<int>& pre, vector<int>& in,int start,
                     int end)
    {
        if(start>end)return NULL;
        static int pre_ind=0;
        TreeNode* t_node=new TreeNode(pre[pre_ind++]);
        if(start==end)return t_node;
        
        int ind=search(in,start,end,t_node->val);
        t_node->left=helper(pre,in,start,ind-1);
        t_node->right=helper(pre,in,ind+1,end);
        return t_node;
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int n=pre.size();
        return helper(pre,in,0,n-1);
    }
};
need to change
time complexity o(n^2) wrost case
  

methdo 2
  efficent
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
    int search(vector<int>&v,int start,int end,int value)
    {
        for(int i=start;i<end+1;i++)
        {
            if(v[i]==value)
                return i;
        }
        return -1;
    }
    TreeNode* helper(vector<int>& pre, vector<int>& in,int start,
                     int end,unordered_map<int,int>mp)
    {
        if(start>end)return NULL;
        static int pre_ind=0;
        int x=pre[pre_ind];
        TreeNode* t_node=new TreeNode(pre[pre_ind++]);
        if(start==end)return t_node;
        
        int ind= mp[x];
        t_node->left=helper(pre,in,start,ind-1,mp);
        t_node->right=helper(pre,in,ind+1,end,mp);
        return t_node;
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int n=pre.size();
        unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[in[i]] = i;
 
        return helper(pre,in,0,n-1,mp);
    }
};
o(n)
