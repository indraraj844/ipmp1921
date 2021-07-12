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
 void helper(Node* root,vector<vector<int>>&res,vector<int>&path,int* sum)
 {
     if(!root)return;
     
     if(!root->left&&!root->right)
     {
         if(*sum==root->key)
         {
             path.push_back(root->key);
             res.push_back(path);
             path.erase(path.begin()+path.size()-1);
         }
     }
     else
     {
         *sum-=root->key;
     path.push_back(root->key);
     helper(root->left,res,path,sum);
     helper(root->right,res,path,sum);
     }
   
 }
void printPaths(Node* root, int sum)
{
    if(!root)return;
    vector<vector<int>>res;
    vector<int>path;
    helper(root,res,path,&sum);
    
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


	int sum = 38;

	printPaths(root, sum);

	return 0;
}
