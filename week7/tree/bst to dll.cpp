method 1
      class Solution
{
     public: 
     void helper(Node *root,Node** head)
    {
        if(!root)return;
    static Node* prev=NULL;
    helper(root->left,head);
    if(prev==NULL)
    {
       *head=root; 
    }
    else
    {
       prev->right=root;
       root->left=prev;
    }
    prev=root;
    helper(root->right,head);
    }

    //Function to convert binary tree to doubly linked list and return it.
    Node * bToDLL(Node *root)
    {
        // your code here
    if(!root)return root;
     Node* head=NULL;
     helper(root,&head);
    return head;

    }
};
using inorder traversal
don't work when one node is 'N'
  
  method 2 usging opposte rule
  root->right,root,root->left;

method 3
  using fix the pointer
  
