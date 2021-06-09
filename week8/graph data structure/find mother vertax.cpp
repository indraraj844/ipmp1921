method 1
  simeple dfs approach 
  #include <bits/stdc++.h>
using namespace std;

class Graph
{
	int V; 
	list<int> *adj; 

	void DFSUtil(int v, vector<bool> &visited);
public:
	Graph(int V);
	void addEdge(int v, int w);
	int findMother();
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}
void Graph::DFSUtil(int v, vector<bool> &visited)
{
	visited[v] = true;

	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFSUtil(*i, visited);
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
}

int Graph::findMother()
{   
    vector<bool>visited(V,false);
    for(int i=0;i<V;i++)
    {
        fill(v.begin(),v.end(),false);
        DFSUtil(i,visited);
        int j=0;
        for(j=0;j<V;j++)
        {
            if(visited[j]==false)break;
        }
        if(j==V)return i;
    }
    return -1;
}
int main()
{
	Graph g(7);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 3);
	g.addEdge(4, 1);
	g.addEdge(6, 4);
	g.addEdge(5, 6);
	g.addEdge(5, 2);
	g.addEdge(6, 0);

	cout << "A mother vertex is " << g.findMother();

	return 0;
}

time complexity o(v^2)
  
  method 2 o(v+e)
  int Graph::findMother()
{   
    vector<bool>visited(V,false);
    for(int i=0;i<V;i++)
    {
      if(!visited[i])
      {
         DFSUtil(i,visited);
         v=i;
      }
    }
      fill(visited.begin(),visited.end(),false);
      DFSUtil(v,visited);
       int j=0;
        for(j=0;j<V;j++)
        {
            if(visited[j]==false)return -1;
        }
       return v;
}
logic :
we will get last index which is false 
  and find from that node can we go everywhere or not 
  if no than no mother vertax.
    beacause if mother vertax will be it must be in
    
