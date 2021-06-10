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
      return parent[v]=find_set(parent[v]);//path reduction method 
      //except than searching we will give parent also for grandchidren 
  }
   int union_set(int A,int B)
   {
       int a=find_set(A);
       int b=find_set(B);
       
       if(a!=b)
       {
           if(sz[a]<sz[b])swap(a,b);//always small will add with big
                             //for reducing time complexity
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
        int u,v;
        cin>>u>>v;
        edge.push_back({u,v});
    }
    bool cycle=false;
    for(auto p:edge)
    {
        int u=p[0];
        int v=p[1];
        int x=find_set(u);
        int y=find_set(v);
        
        if(x==y)
        {
            cycle=true;
            break;
        }
        else
        {
            union_set(x,y);
        }
        
    }
    if(cycle)
    cout<<"cycle is found";
    else
    cout<<" cycle not found";
    
}
learn two best time complexity reducing concept from naive approach
thankyou
