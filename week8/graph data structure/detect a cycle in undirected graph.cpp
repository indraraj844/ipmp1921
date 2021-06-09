method 1 using dfs
class Solution 
{
    public:
    bool helper(vector<int>adj[],int i,vector<bool>&visited,int par)
    {
        visited[i]=true;
        for(auto p:adj[i])
        {
            if(!visited[p])
            {
                if(helper(adj,p,visited,i))
                return true;
            }
            else if(par!=p)
            {
                return true;
            }
        }
        return false;
    }
    //Function to detect cycle in an undirected graph.
	bool isCycle(int V, vector<int>adj[])
	{
	   vector<bool>visited(V,false);
	   for(int i=0;i<V;i++)
	   {
	       if(!visited[i])
	       {
	       if(helper(adj,i,visited,-1))
	       return true;
	       }
	   }
	   return false;
	}
};

method 2
 usign bfs
 class Solution 
{
    public:
    bool helper(vector<int>adj[],int i,int V,vector<bool>&visited)
    {
        queue<int>q;
        vector<int>parent(V,-1);
        q.push(i);
        visited[i]=true;
        while(!q.empty())
        {
            int temp=q.front();
            q.pop();
            for(auto p:adj[temp])
            {
                if(!visited[p])
                {
                    q.push(p);
                    visited[p]=true;
                    parent[p]=temp;
                    
                }
                else if(parent[temp]!=p)
                return true;
            }
        }
        return false;
    }
	bool isCycle(int V, vector<int>adj[])
	{
	   vector<bool>visited(V,false);
	   for(int i=0;i<V;i++)
	   {
	       if(!visited[i])
	       {
	       if(helper(adj,i,V,visited))
	       return true;
	       }
	   }
	   return false;
	}
};
thankyou

