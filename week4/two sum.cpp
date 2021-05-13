method 1;
class Solution {
public:
    vector<int> twoSum(vector<int>&arr, int x) {
        int n=arr.size();
        vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]=i;
        
        for(int i=0;i<n;i++)
        {
            if(mp.find(x-arr[i])!=mp.end()&& mp[x-arr[i]]!=i)
            {
            v.push_back(i);
            v.push_back(mp[x-arr[i]]);
            return v;}
        }
        return v;
        
        
    }
};
