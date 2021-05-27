class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n<=1)return 0;
        int jumps=1,step=0;
        int max_reach=nums[0],reach=nums[0];
        for(int i=1;i<n-1;i++)
        {step++;
         max_reach=max(max_reach,i+nums[i]);
         if(step==reach)
         {
            jumps++;
             step=0;
             reach=max_reach-i;
        }
        }
        return jumps;
    }
};
o(n)
  thankyou
