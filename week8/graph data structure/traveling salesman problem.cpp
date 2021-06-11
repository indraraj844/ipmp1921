method 1 recursive approach
#include<bits/stdc++.h>
using namespace std;
int n=4;
int visit_all= 15;
vector<vector<int>>dist={
    {0,20,42,25},
    {20,0,30,34},
    {42,30,0,10},
    {25,34,10,0}
};
  int tsp(int mask,int pos)
  {
      if(mask==visit_all)
      {
          return dist[pos][0];
      }
       int ans=INT_MAX;
      for(int i=0;i<n;i++)
      {
          if((mask &(1<<i))==0)//check city visited or not 
          {
              int new_ans=dist[pos][i]+tsp((mask|(1<<i)),i);//mask for next city 
              ans=min(ans,new_ans);
          }
      }
      return ans;
  }
   int main()
   {
       cout<<tsp(1,0);
      return 0; 
   }
    
method 2 dynamic approach
#include<bits/stdc++.h>
using namespace std;
int n=4;
int visit_all= 15;
int dp[16][4];
vector<vector<int>>dist={
    {0,20,42,25},
    {20,0,30,34},
    {42,30,0,10},
    {25,34,10,0}
};
  int tsp(int mask,int pos)
  {
      if(mask==visit_all)
      {
          return dist[pos][0];
      }
       int ans=INT_MAX;
       if(dp[mask][pos]!=-1)
       {
           return dp[mask][pos];
       }
      for(int i=0;i<n;i++)
      {
          if((mask &(1<<i))==0)
          {
              int new_ans=dist[pos][i]+tsp((mask|(1<<i)),i);
              ans=min(ans,new_ans);
          }
      }
      return dp[mask][pos]=ans;
  }
   int main()
   {
       for(int i=0;i<(1<<n);i++)
       {
           for(int j=0;j<n;j++)
           {
               dp[i][j]=-1;
           }
       }
       cout<<tsp(1,0);
      return 0; 
   }
    
thankyou
