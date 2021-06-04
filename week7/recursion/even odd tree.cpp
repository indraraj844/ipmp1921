method 1
  brute force
class Solution {
public:
    void helper(TreeNode* root,map<int,vector<int>>&mp,int hd)
    {
        if(!root)return;
        mp[hd].push_back(root->val);
        helper(root->left,mp,hd+1);
        helper(root->right,mp,hd+1);
    }
    bool isEvenOddTree(TreeNode* root) {
     if(!root)return true;
        map<int,vector<int>>mp;
       helper(root,mp,0);
        for(auto p:mp)
        {
            if( (p.first)%2==0)
            {
               vector<int>v=p.second;
                for(int i=0;i<v.size()-1;i++)
                {
                    if(v[i]%2==0)return false;
                    if(v[i]>=v[i+1])return false;
                }
                if(v[v.size()-1]%2==0)return false;
            
            }
            else
            {
                vector<int>v=p.second;
                for(int i=0;i<v.size()-1;i++)
                {
                    if(v[i]%2)return false;
                    if(v[i]<=v[i+1])return false;
                }
                 if(v[v.size()-1]%2)return false;
            }
        }
        return true;
    
    }
};
need to a efficent method
