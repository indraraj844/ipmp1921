class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
    int single_bit=0;
        for(int i=0;i<32;i++)
        {
            int y=(1<<i);
            int sum=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]&y)
                    sum++;
            }
            if(sum%3!=0)
                single_bit|=y;
        }
        
        return single_bit;
        
    }
};
