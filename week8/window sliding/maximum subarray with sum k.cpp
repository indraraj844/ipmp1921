  method  1 brute force 
  method 3 sliding window
  class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        if(n<k)return 0;
        int sum=0,max_length=INT_MIN;
        int i=0,j=0;
        while(j<n)
        {
            sum+=arr[j];
             while(sum>k)
                {
                    sum-=arr[i];
                    i++;
                }
          
          if(sum==k)
            {
                max_length=max(max_length,j-i+1);
            }
              j++;
        }
        return max_length;
    }
};

method3 using a map
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int sum=0;
        mp[sum]++;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mp.count(sum-k))ans+=mp[sum-k];
            mp[sum]++;
        }
        return ans;
    }
};
thankyou

