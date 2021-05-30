class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        vector<vector<int>>v;
        vector<int>res;
        priority_queue<pair<int,vector<int>>> maxheap;
        int n=p.size();
        for(int i=0;i<n;i++)
        {
            int x=p[i][0],y=p[i][1];
            int d=(x*x)+(y*y);
             maxheap.push({d,p[i]});
            if(maxheap.size()>k)
            {
                cout<<maxheap.top().first<<endl;
                maxheap.pop();
            }
       }
        cout<<maxheap.size();
        while(maxheap.size()>0)
        {
            v.push_back(maxheap.top().second);
            maxheap.pop();
         }
          
        return v;
        
    }
};
o(nlog(k))
  thankyou
