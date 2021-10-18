method 1:
  step 1:take each pair in array and get it hamming distance
  step 2: hamming_distance(x,y)
    temp=x xor y;
return number of '1' in temp;

step :calculate all element sum;

method 2:
class Solution {
public:
    
    int totalHammingDistance(vector<int>& nums) {
        
        int n=nums.size();
        int sum=0;
        
        for(int j=0;j<32;j++)
        {
            int count1=0,count0=0;
            for(int i=0;i<n;i++)
            {
                if(nums[i] &(1<<j))count1++;
                else
                    count0++;
            }
            sum+= (count0*count1);
        }
        return sum;
    }
};
get 0's and 1's bit for all bit number and get the summition
of product them
