methdo 1
  brute force
class Solution {
public:
    int count=0;
    void solve(TreeNode* root,int target,int curr_sum)
    {
        if(!root)return;
        curr_sum+=root->val;
        if(curr_sum==target)
        {
            count++;
        }
        solve(root->left,target,curr_sum);
        solve(root->right,target,curr_sum);
    }
    int pathSum(TreeNode* root, int target) {
        if(!root)return 0;
        int curr_sum=0;
        solve(root,target,curr_sum);
         int l1=pathSum(root->left,target);
         int l2=pathSum(root->right,target);
        return count;
    }
};
o(n^2)
  
  method 2 
  usign a map
  o(n)
class Solution {
public:
    int count=0;
    void solve(TreeNode* root,int target,int curr_sum,map<int,int>&u)
    {
        if(!root)return;
        curr_sum+=root->val;
        if(curr_sum==target)
        {
            count++;
        }
        if(u.find(curr_sum-target)!=u.end())
        {
            count+=u[curr_sum-target];
        }
        u[curr_sum]++;
        solve(root->left,target,curr_sum,u);
        solve(root->right,target,curr_sum,u);
        u[curr_sum]--;
    }
    int pathSum(TreeNode* root, int target) {
        if(!root)return 0;
        int curr_sum=0;
        map<int,int>u;
        solve(root,target,curr_sum,u);
         
        return count;
    }
};
