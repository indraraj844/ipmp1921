#include <bits/stdc++.h>
using namespace std;
#define MAX 10

int lcs(int arr1[], int n,int arr2[], int m, int k)
{
    int dp[n+1][m+1][k+1];
    for(int i=0;i<n+1;i++)
   {
     for(int j=0;j<m+1;j++)
    {
     for(int t=0;t<k+1;t++)
     {
         if(i==0||j==0)dp[i][j][t]=0;
        else
        {
          int ans=max(dp[i-1][j][t],dp[i][j-1][t]);
          if(arr1[i-1]==arr2[j-1])
           ans=max(ans,1+dp[i-1][j-1][t]);
           else
           {
               if(t>0)
              ans=max(ans,1+dp[i-1][j-1][t-1]); 
           }
           dp[i][j][t]=ans;
        }
     }
    }
   }
   return dp[n][m][k];
}
int main()
{
	int k = 3;
	int arr1[] = { 1, 3, 2, 4, 5 };
	int arr2[] = { 1, 3, 1,  4 ,4};
	int n = sizeof(arr1) / sizeof(arr1[0]);
	int m = sizeof(arr2) / sizeof(arr2[0]);
	cout << lcs( arr1, n, arr2, m, k) << endl;

	return 0;
}
