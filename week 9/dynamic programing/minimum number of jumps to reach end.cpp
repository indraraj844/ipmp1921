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
method 2 o(n)
    class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n<=1)return 0;
        
        int ladder=nums[0];  //ladder size
        int stairs=nums[0]; //how many stairs in ladder
        int jump=1;
        for(int level=1;level<n;level++)
        {
            if(level==n-1)return jump; // i reached at end
            
            else if(level+nums[level]>ladder)
                 ladder=level+nums[level];  //getting max ladder
            
            stairs--; // in every ladder the stair will be less by 1
            if(stairs==0)
            {
                jump++;
                stairs=ladder-level; //travel for remaining ladder
            }
        }
        return jump;
        
    }
};
thankyou
