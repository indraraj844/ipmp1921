method 1 o(n)
  logic dist(node1 from lca)+dist(node2 from lca);
Node* LCA(Node* root,int n1, int n2)
   {
       if (root == NULL)
       return root;
    if (root->data == n1 || root->data == n2)
       return root;
 
    Node* left = LCA(root->left, n1, n2);
    Node* right = LCA(root->right, n1, n2);
 
    if (left != NULL && right != NULL)
         return root;
    if (left == NULL && right == NULL)
           return NULL;
    if (left != NULL)
        return LCA(root->left, n1, n2);
 
    return LCA(root->right, n1, n2);
   }
   int  distance(Node* p,int a,int count)
   {
       if(!p)return 0 ;
      if(p->data==a)return count;
     return distance(p->left,a,count+1)+distance(p->right,a,count+1);
   }
int findDist(Node* root, int a, int b) {
    Node* lca=LCA(root,a,b);
    int d1=distance(lca,a,0);
    int d2=distance(lca,b,0);
    return d1+d2;
}
thankyou
mean focus on distance function
