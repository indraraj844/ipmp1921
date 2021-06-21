#include <bits/stdc++.h>
using namespace std;
int sum(int freq[],int i,int j)
{
    int sum=0;
    for(int r=i;r<=j;r++)
      sum+=freq[r];

     return sum;
}
  int opcost(int freq[],int i,int j)
  {
      if(i>j)return 0;
      if(i==j)return freq[i];

      int fsum=sum(freq,i,j);
      int min_cost=INT_MAX;
      for(int r=i;r<=j;r++)
      {
          int cost=opcost(freq,i,r-1)+
                   opcost(freq,r+1,j);
          min_cost=min(min_cost,cost);
      }
      return min_cost+fsum;
  }
 int optimalSearchTree(int key[],int freq[],int n)
 {
     return opcost(freq,0,n-1);
 }
int main()
{
	int keys[] = {10, 12, 20};
	int freq[] = {34, 8, 50};
	int n = sizeof(keys) / sizeof(keys[0]);
	cout << "Cost of Optimal BST is "
		<< optimalSearchTree(keys, freq, n);
	return 0;
}
dynamic programing
#include <bits/stdc++.h>
using namespace std;
int sum(int freq[],int i,int j)
{
    int sum=0;
    for(int r=i;r<=j;r++)
      sum+=freq[r];

     return sum;
}
 int optimalSearchTree(int key[],int freq[],int n)
 {
     int cost[n][n];
     for(int i=0;i<n;i++)
     cost[i][i]=freq[i];

     for(int l=2;l<=n;l++)
     {
      for(int i=0;i<=n-l+1;i++)
      {
          int j=i+l-1;
          cost[i][j]=INT_MAX;

          for(int r=i;r<=j;r++)
      {
          int c=((r>i)? cost[i][r-1]:0)+
                   ((r<j)? cost[r+1][j]:0)+
                   sum(freq,i,j);

          cost[i][j]=min(cost[i][j],c);
      }
      }
     }
     return cost[0][n-1];
 }
int main()
{
	int keys[] = {10, 12, 20};
	int freq[] = {34, 8, 50};
	int n = sizeof(keys) / sizeof(keys[0]);
	cout << "Cost of Optimal BST is "
		<< optimalSearchTree(keys, freq, n);
	return 0;
}

thankyou
