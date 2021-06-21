recursion
int LISS(Node *root)
{
    //Code here
    if(!root)return 0;
    int size_exc=LISS(root->left)+LISS(root->right);
    int size_inc=1;
    if(root->left)
    {
        size_inc+=LISS(root->left->left)+LISS(root->left->right);
    }
    if(root->right)
    {
        size_inc+=LISS(root->right->left)+LISS(root->right->right);
    }
    return max(size_inc,size_exc);
}

dynamic programing
we have to change our structure put one more int object liss so we can get answer in it
