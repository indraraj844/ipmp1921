method 1 using dfs
class Solution
{
	public:
    void helper(vector<int> adj[],int i,vector<bool>&visited,stack<int>&st)
    {
        visited[i]=true;
        for(auto p:adj[i])
        {
            
	      if(visited[p]==false)
	       helper(adj,p,visited,st);
        }
        st.push(i);
    }
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	  vector<bool>visited(V,false);
	  stack<int>st;
	    vector<int>v;
	    for(int i=0;i<V;i++)
	    {
	      if(visited[i]==false)
	       helper(adj,i,visited,st);
	    }
	    while(!st.empty())
	    {
	        v.push_back(st.top());
	        st.pop();
	    }
	    return v;
	}
};

logic:
inserting a parent first i will insert it adjancany node
(for this first call for adjancy node and after push them in a stack)
  3. print that stack
  
  method 2 using bfs (same logic)
  class Solution
{
	public:
    void helper(vector<int> adj[],int i,vector<bool>&visited,stack<int>&st)
    {
        visited[i]=true;
        queue<int>q;
        q.push(i);
        while(!q.empty())
        {
            int temp=q.front();
            q.pop();
            for(auto p:adj[temp])
          {
            
	      if(visited[p]==false)
	       helper(adj,p,visited,st);
           }
        }
        st.push(i);
    }
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	  vector<bool>visited(V,false);
	  stack<int>st;
	    vector<int>v;
	    for(int i=0;i<V;i++)
	    {
	      if(visited[i]==false)
	       helper(adj,i,visited,st);
	    }
	    while(!st.empty())
	    {
	        v.push_back(st.top());
	        st.pop();
	    }
	    return v;
	}
};

  thankyou
  
