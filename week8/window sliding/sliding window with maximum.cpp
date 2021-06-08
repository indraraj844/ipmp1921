metod 1 brute force
method 2 sliding window
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
      if(k==0)return arr;
        int n=arr.size();
        int high=INT_MIN;
        vector<int>v;
        for(int i=0;i<k;i++)
        {
            high=max(arr[i],high);
        }
        for(int i=k;i<n;i++)
        {
            v.push_back(high);
            
            if(arr[i]>high){high=arr[i];}
            if(arr[i-k]==high)
            { high=INT_MIN;
                for(int j=i-k+1;j<i+1;j++)
                {
                   high=max(arr[j],high);
                }
            }
        }
        v.push_back(high);
        return v;
    }
};
not valid for all cases time exceed for large case
  
  method 3
  class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       vector<int> ans;
        list<int> l;
        int i=0;
        int j=0;
        
        if (k>nums.size()) // edge case
        {
            ans.push_back(*max_element(nums.begin(),nums.end()));
            return ans;
        }
        
        while (j<nums.size())
        {
            while(l.size()>0 && l.back() <nums[j])
            {
                l.pop_back();
            }
            l.push_back(nums[j]);
            if ((j-i+1)<k)
                j++;
            else if (j-i+1==k)
            {
                ans.push_back(l.front());
                if (l.front()==nums[i])
                    l.pop_front();
                i++;
                j++;
            }
            
        }
        return ans;
    }
};
very slow process
