class Solution 
{
    public:
    void helper(vector<int> adj[],int i,vector<bool>&visited,vector<int>&v)
    {
        visited[i]=true;
        v.push_back(i);
        
        for(auto p:adj[i])
        {
            
	      if(visited[p]==false)
	       helper(adj,p,visited,v);
        }
    }
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<bool>visited(V,false);
	    vector<int>v;
	    for(int i=0;i<V;i++)
	    {
	      if(visited[i]==false)
	       helper(adj,i,visited,v);
	    }
	    return v;
	}
};
valid for also dissconnected graph
thankyou
