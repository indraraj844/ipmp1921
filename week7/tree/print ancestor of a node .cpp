methdod 1 standred 
class Solution{
  public:
   bool helper(struct Node *root, int target,vector<int>&v)
   {
       if(!root)return false;
       else if(root->data==target)return true;
       else if(helper(root->left,target,v)||helper(root->right,target,v))
       {
           v.push_back(root->data);
           return true;
       }
       return false;
   }
    vector<int> Ancestors(struct Node *root, int target)
    {
     vector<int>v;
     if(!root)return v;
     bool p=helper(root,target,v);
     return v;
     
    }
};

method 2;
without recursion using stack
class Solution{
  public:
    vector<int> Ancestors(struct Node *root, int target)
    {
     vector<int>v;
     if(!root)return v;
    stack<Node* >s;
    while(1){
        while(root &&root->data!=target)
        {
            s.push(root);
            root=root->left;
        }
        if(root && root->data==target)break;
        
        if(!s.top()->right)
        {
            root=s.top();
            s.pop();
            
            while(!s.empty() && s.top()->right==root)
            {
                root=s.top();
                s.pop();
            }
            
        }
        root=(s.size()==0)?NULL:s.top()->right;
    }
    while(!s.empty())
    {
        v.push_back(s.top()->data);
        s.pop();
    }
    return v;
     
    }
};
method 3
  
