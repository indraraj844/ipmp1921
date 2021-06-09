
class Solution
{
    public:
    bool helper(vector<int>adj[],int i,vector<bool>&visited,vector<bool>&recstack)
    {
        visited[i]=true;
        recstack[i]=true;
        for(auto p:adj[i])
        {
            if(!visited[p])
            {
                if(helper(adj,p,visited,recstack))
                return true;
            }
            else if(recstack[p])
            {
                return true;
            }
        }
        recstack[i]=false;
        return false;
    }
	bool isCyclic(int V, vector<int> adj[]) 
	{
	    vector<bool>visited(V,false);
	    vector<bool>recstack(V,false);
	   for(int i=0;i<V;i++)
	   {
	       if(!visited[i])
	       {
	       if(helper(adj,i,visited,recstack))
	       return true;
	       }
	   }
	   return false;
	}
};
thankyou

