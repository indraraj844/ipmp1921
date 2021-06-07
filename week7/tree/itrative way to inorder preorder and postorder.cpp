1.inorder
  class Solution
{
    public:
    //Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root)
    {
   stack<Node *> s;
    Node *curr = root;
 vector<int>arr;
    while (curr != NULL || s.empty() == false)
    {
       
        while (curr !=  NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
 
        arr.push_back(curr->data);
        curr = curr->right;
    }
    while(!s.empty())
    {
        Node* temp=s.top();
        arr.push_back(temp->data);
        s.pop();
    }
    
    return arr;     //do not change the default values(i.e -1) in the unused array indices

    }
};

2.preorder
void preorder(node* root)
{
    if(!root)return;
    stack<node* >s;
    while(root ||s.empty()==false)
    {
        while(root)
        {
            cout<<root->data;
            s.push(root);
            root=root->left;
        }
        node* temp=s.top();
        s.pop();
        root=temp->right;
    }
}
3.postorder
  void postorder(node* root)
{
    if(!root)return;
    stack<node* >s;
    while(root ||s.empty()==false)
    {
        while(root)
        {
            if(root->right)
            s.push(root->right);
            
            s.push(root);
            root=root->left;
        }
        node* temp=s.top();
        s.pop();
        if(temp->right)
        {
            s.pop();
            s.push(temp);
            root=temp->right;
        }
        else
        {
            cout<<temp->data<<" ";
            root=NULL;
        }
    }
}

using 2 stack
void postorder(node* root)
{
    if(!root)return;
    stack<node* >s1;
    stack<node* >s2;
    
    s1.push(root);
    while(s1.empty()==false)
    {
     node* temp=s1.top();
     s1.pop();
     s2.push(temp);
     
     if(temp->left)s1.push(temp->left);
      if(temp->right)s1.push(temp->right);
    }
    while(!s2.empty())
    {
        cout<<s2.top()->data;
        s2.pop();
    }
}


without stack we can also do postorder traversal
thankyou
