method 1 using map
class Solution {
public:
    void verticalorder(TreeNode*root,map<int,vector<int>>&mp,
                       int level)
    {
        if(!root)return;
        mp[level].push_back(root->val);
        verticalorder(root->left,mp,level-1);
         verticalorder(root->right,mp,level+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<int>>mp;
        verticalorder(root,mp,0);
        vector<vector<int>>v;
        for(auto p:mp)
        {
            v.push_back(p.second);    
        }
        return v;
    }
};
