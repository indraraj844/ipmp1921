class Solution {
public:
    int countRangeSum(vector<int>& nums, int lower, int upper) {
    int n=nums.size();
        int count=0,sum;
        for(int i=0;i<n;i++)
        {sum=0;
        for(int j=i;j<n;j++)
        {
            if(sum==2147483647 && nums[j]>0)
                break;
            
            sum+=nums[j];
            if(sum>=lower &&sum<=upper)
                count++;
        }
        }
        return count;
    }
};
dont work for all cases 
integer overflow

