
method 1
  class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       int count=0,count1=0;
        int right=0,left=0;
        unordered_map<int,int>mp,mp1;
        while(right<nums.size())
        {
            mp[nums[right]]++;
            while(mp.size()>=k)
            {
                mp[nums[left]]--;
                if(mp[nums[left]]==0)mp.erase(nums[left]);
                left++;
                count+=nums.size()-right;
            }
            right++;
        }
        right=0,left=0;
          while(right<nums.size())
        {
            mp1[nums[right]]++;
            while(mp1.size()>=(k+1))
            {
                mp1[nums[left]]--;
                if(mp1[nums[left]]==0)mp1.erase(nums[left]);
                left++;
                count1+=nums.size()-right;
            }
            right++;
        }
        return count-count1;
    }
};
method 2
  
