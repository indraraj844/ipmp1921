class Solution{
  public:
    Node* minnode(Node* root)
    {
        while(root->left)
        root=root->left;
        
        return root;
    }
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        if(x->right)
        return minnode(x->right);
        Node* succ=NULL;
        while(root)
        {
            if(x->data<root->data)
            {
                succ=root;
                root=root->left;
            }
            else if(x->data>root->data)
            root=root->right;
            else
            break;
        }
        return succ;
    }
};
o(n)
  thankyou
  
