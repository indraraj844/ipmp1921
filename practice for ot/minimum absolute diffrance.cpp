class Solution {
public:
    vector<int> minDifference(vector<int>& nums, vector<vector<int>>& queries) {
        
        int n=queries.size();
        vector<int>v(n);
        map<pair<int,int>,int>mp;
        for(int i=0;i<n;i++)
        {
            int x=queries[i][0];
            int y=queries[i][1];
            if(mp.find({x,y})!=mp.end())
            {
                v[i]=mp[{x,y}];
                continue;
            }
            else
            {
                set<int>s;
                for(int j=x;j<=y;j++)
                {
                 s.insert(nums[j]);
                }
               if(s.size()==1)v[i]=-1;
               else
               { 
                   vector<int>p;
                   int diff=1e7;
                   for(auto it:s)
                   {
                    p.push_back(it);
                   }
                   for(int k=0;k<p.size()-1;k++)
                   {
                       diff=min(diff,p[k+1]-p[k]);
                   }
                   mp[make_pair(x,y)]=diff;
                   v[i]=diff;
               }
            }
        }
        return v;
    }
};
