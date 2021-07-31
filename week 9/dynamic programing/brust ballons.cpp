class Solution {
public:
    int maxCoins(vector<int>& nums) {
       int n=nums.size()+2;
        int arr[n];
        arr[0]=1;
        arr[n-1]=1;
        for(int i=1;i<n-1;i++)
            arr[i]=nums[i-1];
        
        int dp[n][n];
        memset(dp,0,sizeof(dp));
        
        for(int l=1;l<n-1;l++)
        {
         for(int start=1;start<n-l;start++)
         {
           int end=start+l-1;
           for(int k=start;k<=end;k++)
           {
              dp[start][end]=max(dp[start][end],dp[start][k-1]+
                            dp[k+1][end]+arr[start-1]*arr[k]*arr[end+1]);
           }
         }
        }
        return dp[1][n-2];
    }
};
