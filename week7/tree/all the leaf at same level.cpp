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
using queue (itrative method)
  class Solution{
  public:
 
    bool check(Node *root)
    {
        if(!root)return true;
        queue<Node*>q;
        q.push(root);
        int level=0,res=0;
        while(!q.empty())
        {
         Node* temp=q.front();
         q.pop();
         if(!temp->left && !temp->right)
         {
             if(res==0)res=level;
             else if(res!=level)
             {
                 return 0;
             }
         }
         else
         {
         level++;
         if(temp->left)
         {
             q.push(temp->left);
         }
         if(temp->right)
         {
             q.push(temp->right);
         }
        }
        }
        return 1;
    }
};
