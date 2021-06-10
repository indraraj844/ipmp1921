#include<bits/stdc++.h>
using namespace std;
#define N 1e5
vector<int>parent(N);
vector<int>dist(N);


int main()
{
 int n,m;
 cin>>n>>m;
 vector<vector<int>>edges[n];
 for(int i=0;i<m;i++)
 {
     int u,v,w;
     cin>>u>>v>>w;
     edges[u].push_back({v,w});
     edges[v].push_back({u,w});
 }
 int src;
 cin>>src;
 set<vector<int>>s;
 vector<int>dist(n,INT_MAX);
 dist[src]=0;
 
 s.insert({0,src});
 int cost=0;
 vector<bool>vis(n,false);
 vector<int>parent(n);
 while(!s.empty())
 {
     auto x=*(s.begin());
     vis[x[1]]=true;
     s.erase(x);
     int u=x[1];
     int v=parent[x[1]];
     int w=x[0];
     cout<<u<<" "<<v<<" "<<w<<endl;
     cost+=w;
     
     for(auto it:edges[x[1]])
     {
        if(vis[it[0]])continue;
        
        if(dist[it[0]]>it[1])
        {
            s.erase({dist[it[0]],it[0]});
            dist[it[0]]=it[1];
            s.insert({dist[it[0]],it[0]});
        }
     }
 }
cout<<cost;
 return 0;
}
