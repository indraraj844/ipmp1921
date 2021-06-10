#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,m;
 cin>>n>>m;
 vector<vector<pair<int,int>>>edges(n+1);
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
 vector<int>parent(n,-1);
 while(!s.empty())
 {
     auto x=*(s.begin());
     vis[x[1]]=true;
     int u=x[1];
     int v=parent[x[1]];
     int w=x[0];
     cout<<u<<" "<<v<<" "<<w<<endl;
     cost+=w;
     s.erase(x);
     for(auto it:edges[x[1]])
     {
        if(vis[it.first])continue;
        if(dist[it.first]>it.second)
        {
            s.erase({dist[it.first],it.first});
            dist[it.first]=it.second;
            s.insert({dist[it.first],it.first});
        }
     }
 }
cout<<cost;
 return 0;
}
need to change
