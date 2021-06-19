class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
        dp[0]=0;
        for(int i=1;i<n;i++)
        {
            int ans=INT_MAX;
          for(int j=0;j<i;j++)
          {
              if(j+nums[j]>=i)
              {
                  int temp=1+dp[j];
                  ans=min(ans,temp);
              }
                  
          }
            dp[i]=ans;
        }
        return dp[n-1];
    }
};
