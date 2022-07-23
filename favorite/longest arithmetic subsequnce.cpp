brute force
class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        
        int n=nums.size();
        if(n<3)return n;
        int ans=2;
        
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                int diff=nums[j]-nums[i];
                int temp=2;
                unordered_map<int,int>mp;
                mp[nums[j]]++;
                for(int k=j+1;k<n;k++)
                {
                 if(mp.find(nums[k]-diff)!=mp.end()  )
                 {
                if((diff && mp.find(nums[k])==mp.end())||(!diff))
                {
                    
                     temp++;
                     mp[nums[k]]++;
                }
                 }
                
                }
                ans=max(ans,temp);
            }
        }
        return ans;
    }
};
2. dp solution
class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(1001,1));
        int ans=2;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                int diff= nums[i]-nums[j]+ 500;
                
                dp[i][diff]= dp[j][diff]+ 1;
                
                ans=max(ans,dp[i][diff]);
            }
        }
        return ans;
    }
};
