recursive 
class Solution {
public:
    bool helper(vector<int>& nums,int n,int sum,int restsum)
    {
        if(sum==restsum &&n==0)return true;
        else if(n==0)return false;
        else
            return helper(nums,n-1,sum+nums[n-1],restsum-nums[n-1])
            ||helper(nums,n-1,sum,restsum);
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=nums[i];
        return helper(nums,n,0,sum);
    }
};
dynamic
class Solution {
public:
    bool helper(vector<int>& nums,int n,int sum)
    {
        bool dp[n+1][sum+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(j==0)dp[i][j]=true;
                else if(j!=0 && i==0)dp[i][j]=false;
                else
                {
                    if(nums[i-1]>j)
                        dp[i][j]= dp[i-1][j];
                    else
                        dp[i][j]= dp[i-1][j]||dp[i-1][j-nums[i-1]];
                }
            }
           
        }
         return dp[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=nums[i];
        
        if(sum%2)return false;
        return helper(nums,n,sum/2);
    }
};
thankyou
