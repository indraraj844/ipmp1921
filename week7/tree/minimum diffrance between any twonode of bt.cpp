method 1 
  store all value in an array and sort it get minimum diffarance
class Solution {
public:
    void getarray(TreeNode* root,vector<int>&arr)
    {
        if(!root)return;
        arr.push_back(root->val);
        getarray(root->left,arr);
        getarray(root->right,arr);
    }
    int minDiffInBST(TreeNode* root) {
     if(!root)return INT_MAX;
        vector<int>arr;
       getarray(root,arr);
        sort(arr.begin(),arr.end());
        int diff=abs(arr[0]-arr[1]);
      for(int i=1;i<arr.size()-1;i++)
      {
          diff=min(diff,abs(arr[i]-arr[i+1]));
      }
        return diff;
    }
};
thank you
o(nlogn)
