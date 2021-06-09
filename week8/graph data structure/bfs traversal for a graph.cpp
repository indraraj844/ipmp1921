valid for connected graph also
class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    queue<int>q;
	    vector<int>v;
	    vector<bool>visited(V,false);
	    q.push(0);
	    visited[0]=true;
	    while(!q.empty())
	    {
	        int temp=q.front();
	        q.pop();
	        v.push_back(temp);
	        
	        for(auto p:adj[temp])
	        {
	            if(!visited[p])
	            {
	                visited[p]=true;
	                q.push(p);
	            }
	        }
	    }
	    return v;
	}
};

for disconnected graph
class Solution
{
    public:
   void helper(vector<int>adj[],int i,vector<bool>&visited,vector<int>&v)
   {
       queue<int>q;
        q.push(i);
	    visited[0]=true;
	    while(!q.empty())
	    {
	        int temp=q.front();
	        q.pop();
	        v.push_back(temp);
	        
	        for(auto p:adj[temp])
	        {
	            if(!visited[p])
	            {
	                visited[p]=true;
	                q.push(p);
	            }
	        }
	    }
   }
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    vector<int>v;
	    vector<bool>visited(V,false);
	    for(int i=0;i<V;i++)
	    {
	        if(!visited[i])
	        helper(adj,i,visited,v);
	    }
	    return v;
	}
};
thankyou
time complexity (v+E)
  
