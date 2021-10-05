method 1:
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>>s;
        int n=nums.size();
        
        vector<vector<int>>ans;
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++)mp[nums[i]]=i;
        
        for(int i=0;i<n-1;i++)
        {
         for(int j=i+1;j<n;j++)
         {
             int sum=nums[i]+nums[j];
             if(mp.find(-sum)!=mp.end() && mp[-sum]!=i && mp[-sum]!=j)
             {
                 if(s.find({nums[i],nums[j],-sum})==s.end())
                 {
                    ans.push_back({nums[i],nums[j],-sum});
                     s.insert({nums[i],nums[j],-sum});
                     s.insert({nums[i],-sum,nums[j]});
                     s.insert({nums[j],nums[i],-sum});
                     s.insert({nums[j],-sum,nums[i]});
                     s.insert({-sum,nums[i],nums[j]});
                     s.insert({-sum,nums[j],nums[i]});          
                 }
                 
             }
         }
        }
        
        return ans;
    }
};
method 2:two pointer
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>>s;
        int n=nums.size();
        
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-2;i++)
        {
         int l=i+1,h=n-1;
            int sum1=-nums[i];
            while(l<h)
            {
                while(l<h&& nums[l]+nums[h]<sum1)l++;
                while(l<h && nums[l]+nums[h]>sum1)h--;
                if(l<h && nums[l]+nums[h]==-nums[i])
                {
                    s.insert({nums[i],nums[l],nums[h]});
                    l++;
                }
            }
         }
        for(auto p:s)ans.push_back(p);
        
        return ans;
    }
};
