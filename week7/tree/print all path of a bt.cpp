method 1
  o(n^2)
  when we find a leaf node we will print our array
  method2:
efficent
o(n)
class Solution {
public:
    void helper(TreeNode* root,vector<string>&v,string p)
    {
        if(!root)return;
        int num = root->val;
       ostringstream str1;
        str1 << num;
       string d = str1.str();
        if(!root->left &&!root->right)
            p+=d; 
        else 
           p+=d+"->";
        if(!root->left &&!root->right)
        {
            v.push_back(p);
            return;
        }
        helper(root->left,v,p);
        helper(root->right,v,p);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>v;
        string p;
        helper(root,v,p);
        return v;
    }
};
thankyou
