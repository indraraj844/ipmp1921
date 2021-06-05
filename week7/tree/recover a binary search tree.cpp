method 1
 we will take a auxilary array and store all value in array using inorder traversal
 then we will correct it 
 again do deserilization
 
 method 2
   using 3 pointer
   first mid last
   if swaping element are adjcent than only mid and first will work 
   other first and last 
   
class Solution {
public:
    void helper(TreeNode* root, TreeNode** first,TreeNode** mid,
               TreeNode** last,TreeNode** prev)
    {if(root)
    {
        helper(root->left,first,mid,last,prev);
        if(*prev && (*prev)->val>root->val )
        {
          if(!(*first))
          {
              *first=*prev;
              *mid=root;
          }
          else
              *last=root;
        }
        *prev=root;
        helper(root->right,first,mid,last,prev);
    }
      return;  
    }
    void recoverTree(TreeNode* root) {
        TreeNode *first=NULL,*mid=NULL,*last=NULL,*prev=NULL;
         helper(root,&first,&mid,&last,&prev);
        
        if(first &&last)
        {
            swap(first->val,last->val);
        }
        else 
        {
            swap(first->val,mid->val);
        }
    }
};
o(n) thankyou
