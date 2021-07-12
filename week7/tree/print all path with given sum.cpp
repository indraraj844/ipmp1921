// C++ program to print all paths begiinning with
// root and sum as given sum
#include<bits/stdc++.h>
using namespace std;

// A Tree node
struct Node
{
	int key;
	struct Node *left, *right;
};

// Utility function to create a new node
Node* newNode(int key)
{
	Node* temp = new Node;
	temp->key = key;
	temp->left = temp->right = NULL;
	return (temp);
}
 void helper(Node* root,vector<vector<int>>&res,vector<int>&path,int sum,int sum1)
 {
     if(!root)return;
     sum1+=root->key;
     path.push_back(root->key);
         if(sum==sum1)
         {
             res.push_back(path);
             
         }
     helper(root->left,res,path,sum,sum1);
     helper(root->right,res,path,sum,sum1);
     path.pop_back();
    
   
 }
void printPaths(Node* root, int sum)
{
    if(!root)return;
    vector<vector<int>>res;
    vector<int>path;
    helper(root,res,path,sum,0);
    
    for(auto p:res)
    {
        for(auto d:p)
        {
            cout<<d<<"->";
        }
        cout<<endl;
    }
}


// Driver program
int main ()
{
	/* 10
	/	 \
	28	 13
		/	 \
		14	 15
		/ \	 / \
	21 22 23 24*/
	Node *root = newNode(10);
	root->left = newNode(28);
	root->right = newNode(13);

	root->right->left = newNode(14);
	root->right->right = newNode(15);

   
    root->right->left->left = newNode(21);
    root->right->left->right = newNode(22);
    root->right->right->left = newNode(23);
    root->right->right->right = newNode(24);

	int sum = 38;

	printPaths(root, sum);

	return 0;
}
