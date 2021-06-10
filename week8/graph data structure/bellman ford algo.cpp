#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>edges;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
    }
    int src;
    cin>>src;
    vector<int>dist(n,INT_MAX);
    dist[src]=0;
    
    //n-1 times relaxtion
    for(int i=0;i<n-1;i++)
    {
        for(auto p:edges)
        {
            int u=p[0],v=p[1],w=p[2];
            if(dist[v]>dist[u]+w)
             dist[v]=dist[u]+w;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<dist[i]<<" ";
    }
    return 0;
}
logic ralxition n times 
after you will satisfied answer
thankyou
