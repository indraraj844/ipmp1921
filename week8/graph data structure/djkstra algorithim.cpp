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
 set<pair<int,int>>s;
 vector<int>dist(n,INT_MAX);
 dist[src]=0;
 
 s.insert({0,src});
 while(!s.empty())
 {
     auto x=*(s.begin());
     s.erase(x);
     for(auto it:edges[x.second])
     {
         if(dist[it.first]>dist[x.second]+it.second)
         {
             s.erase({dist[it.first],it.first});
             dist[it.first]=dist[x.second]+it.second;
             s.insert({dist[it.first],it.first});
         }
     }
 }
 for(int i=1;i<=n;i++)
 {
     if(dist[i]<INT_MAX)
     cout<<dist[i]<<" ";
     else
     cout<<-1<<" ";
 }
 return 0;
}
logic: i will use a set here 
