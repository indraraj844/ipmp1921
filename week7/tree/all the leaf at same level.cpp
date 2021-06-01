class Solution{
  public:
    bool helper(Node* root,int level,int *leaflevel)
    {
        if(!root)return true;
        if(!root->left && !root->right)
      {
          if(*leaflevel==0)
          {
              *leaflevel=level;
              return true;
          }
          return (*leaflevel==level);
      }
        
        return helper(root->left,level+1,leaflevel)&&
          helper(root->right,level+1,leaflevel);
        
    }
    bool check(Node *root)
    {
        //Your code here
        if(!root)return true;
        int leaflevel=0;
        return helper(root,0,&leaflevel);
    }
};
