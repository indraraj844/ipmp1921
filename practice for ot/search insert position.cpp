class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
       int low=0,high=n-1;
        int ans;
         if(target>nums[n-1])return n;
        while(low<=high)
        {
           int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                break;
            }
            else if(nums[mid]<target)
                low=mid+1;
            else
            {
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};
