class Solution {
public:
    void  helper(vector<vector<int>>&graph,vector<vector<int>>&res
                ,vector<int>&v,int src,int last)
    {
         v.push_back(src);
         if(src==last)
         {
             res.push_back(v);
             v.pop_back();
             return;
         }
        
        for(auto p:graph[src])
        {
            helper(graph,res,v,p,last);
        }
        v.pop_back();        
    }
    vector<vector<int>>allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        int last=n-1;
        int src=0;
        vector<vector<int>>res;
        vector<int>v;
        helper(graph,res,v,src,last);
        return res;
    }
};
thankyou
