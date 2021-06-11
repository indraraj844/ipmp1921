#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>adj;
vector<int>col;
int main()
{
    int n,m;
    cin>>n>>m;
    adj=vector<vector<int>>(m);
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
   int result[n];
    result[0]  = 0;
 
    for (int u = 1; u < n; u++)
        result[u] = -1; 
    bool available[n];
    for (int cr = 0; cr < n; cr++)
        available[cr] = false;
        
    for (int u = 1; u < n; u++)
    {
        for (auto i: adj[u])
            if (result[i] != -1)
                available[result[i]] = true;

        int cr;
        for (cr = 0; cr < n; cr++)
            if (available[cr] == false)
                break;
        result[u] = cr;
        for (auto i: adj[u])
            if (result[i] != -1)
                available[result[i]] =false;
    }
 
    for (int u = 0; u < n; u++){
        cout << "Vertex " << u << " --->  Color "
             << result[u] << endl;
}
    
    return 0;
}
thankyou
