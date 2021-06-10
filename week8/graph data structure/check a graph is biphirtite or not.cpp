#include<bits/stdc++.h>
using namespace std;
vector<bool>vis;
vector<vector<int>>adj;
vector<int>col;
bool flag;
    void color(int i,int curr)
    {
        if(col[i]!=-1 && col[i]!=curr)
        {
            flag=false;
            return ;
        }
        col[i]=curr;
        if(vis[i])return;
        vis[i]=true;
        for(auto p:adj[i])
        {
            color(p,1^curr);
        }
    }
int main()
{
    int n,m;
    cin>>n>>m;
    adj=vector<vector<int>>(n);
    vis=vector<bool>(n,false);
    col=vector<int>(n,-1);
    flag=true;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
          color(i,0);
        }
    }
    if(flag)cout<<" it's biphritite";
    else
    cout<<" it's not biphritite";
    
    return 0;
}
