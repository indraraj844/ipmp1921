#include<bits/stdc++.h>
using namespace std;
#define N 1e5

vector<int>parent(N);
vector<int>sz(N);
    
    void make_set(int v)
    {
        parent[v]=v;
        sz[v]=1;
    }
  int find_set(int v)
  {
      if(v==parent[v])
      return v;
      return parent[v]=find_set(parent[v]);
  }
   int union_set(int A,int B)
   {
       int a=find_set(A);
       int b=find_set(B);
       
       if(a!=b)
       {
           if(sz[a]<sz[b])swap(a,b);
           
           parent[b]=a;
           sz[a]+=sz[b];
       }
       
   }
int main()
{
    for(int i=0;i<N;i++)
      make_set(i);
      
    int n,m;
    cin>>n>>m;
    vector<vector<int>>edge;
    
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edge.push_back({w,u,v});
    }
    sort(edge.begin(),edge.end());
    int cost=0;
    for(auto p:edge)
    {
        int w=p[0];
        int u=p[1];
        int v=p[2];
        
        int x=find_set(u);
        int y=find_set(v);
        
        if(x==y)
        {
            continue;
        }
        else
        {
            cost+=w;
            cout<<u<<"->"<<v<<endl;
            union_set(x,y);
        }
        
    }
   cout<<cost;
    
}
