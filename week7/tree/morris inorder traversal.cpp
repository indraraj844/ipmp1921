    
    void morris(node* root)
    {
        if(!root)return;
        node* curr=root;
        while(curr)
        {
            if(!curr->left)
            {
                cout<<curr->data<<" ";
                curr=curr->right;
            }
            else
            {
                node* find=find_preceder(root->left);
                if(find->right)
                {
                   find->right=NULL;
                   cout<<curr->data<<" ";
                   curr=curr->right;
                }
                else
                {
                    find->right=curr;
                    curr=curr->left;
                }
            }
        }
    }

morris preorder
    
    void morrisPreorder(node* root)
    {
        if(!root)return;
        while(root)
        {
            if(!root->left)
            {
                cout<<root->data<<" ";
                root=root->right;
            }
            else
            {
                node* curr=root->left;
                while(curr->right && curr->right!=root)
                  curr=curr->right;
                  
                if(curr->right==root)
                {
                    curr->right=NULL;
                   root=root->right;
                }
                else
                {
                    cout<<root->data<<" ";
                    curr->right=root;
                    root=root->left;
                }
            }
        }
    }

morris postorder
