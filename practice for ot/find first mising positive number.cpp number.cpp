method 1 o(n) s(n)
  class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto p:nums)
            mp[p]++;
        
        int n=nums.size();
        for(int i=1;i<=n;i++)
        {
          if(mp.find(i)==mp.end())return i;     
        }
        return n+1;
         
    }
};
method 2 o(n) s(1)
  class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]<=0)nums[i]=nums.size()+1;
        }
        for(int i=0;i<n;i++)
        {
            int index=abs(nums[i])-1;
            if(index<nums.size() && nums[index]>0)nums[index]*=(-1);
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)return i+1;
        }
        return nums.size()+1;
    }
};
thankyou
