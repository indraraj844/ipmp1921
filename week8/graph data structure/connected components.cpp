code 1
  #include<bits/stdc++.h>
using namespace std;
vector<bool>vis;
vector<vector<int>>adj;
int get_comp(int idx)
{
    if(vis[idx])return 0;
    
    vis[idx]=true;
    int ans=1;
    for(auto i:adj[idx])
    {
        if(!vis[i])
        {
            ans+=get_comp(i);
            vis[i]=true;
        }
    }
    return ans;
}

int main()
{
    int n,m;
    cin>>n>>m;
    adj=vector<vector<int>>(n);
    vis=vector<bool>(n,false);
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int>components;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            components.push_back(get_comp(i));
        }
    }
    for(auto i:components)
    {
        cout<<i<<" ";
    }
    return 0;
}

code 2 when you want to chose two guy who are not in same group
  #include<bits/stdc++.h>
using namespace std;
vector<bool>vis;
vector<vector<int>>adj;
int get_comp(int idx)
{
    if(vis[idx])return 0;
    
    vis[idx]=true;
    int ans=1;
    for(auto i:adj[idx])
    {
        if(!vis[i])
        {
            ans+=get_comp(i);
            vis[i]=true;
        }
    }
    return ans;
}

int main()
{
    int n,m;
    cin>>n>>m;
    adj=vector<vector<int>>(n);
    vis=vector<bool>(n,false);
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int>components;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            components.push_back(get_comp(i));
        }
    }
    int ans=0;
    for(auto i:components)
    {
       ans+=i*(n-i);
    }
    cout<<(ans/2);
    return 0;
}
