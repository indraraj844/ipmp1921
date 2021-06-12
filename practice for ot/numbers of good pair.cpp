method 1 brute force
method 2
  class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int count=0;
       int hash[101]={0};
        for(int i=0;i<n;i++)
        {
            hash[nums[i]]++;
        }
        for(int i=1;i<101;i++)
        {
            if(hash[i]>0)
            {
                int p=hash[i];
                count+= (p*(p-1))/2;
            }
        }
        return count;
    }
};
thankyou
