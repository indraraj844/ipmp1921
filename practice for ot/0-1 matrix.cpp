method 1
  class Solution {
public:
    int vis[1005][1005];
    int helper(vector<vector<int>> & mat,int i,int j,int n,int m)
    {
     if(mat[i][j]==0)return 0;
      else if(vis[i][j])return mat[i][j];
        
        vis[i][j]=true;
        int p=INT_MAX,q=INT_MAX,r=INT_MAX,s=INT_MAX;
        if(i<n-1 &&!vis[i+1][j] )
         p=1+helper(mat,i+1,j,n,m);
        if( i>0&& !vis[i-1][j] )
         q=1+helper(mat,i-1,j,n,m);
        if( j<m-1 &&!vis[i][j+1] )
         r=1+helper(mat,i,j+1,n,m);
        if(j>0 && !vis[i][j-1])
         s=1+helper(mat,i,j-1,n,m);
        
        return min(min(p,q),min(r,s));
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int n=mat.size();
        int m=mat[0].size();
        
         vector<pair<int,int>>zeros,ones;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
              if(mat[i][j])ones.push_back(make_pair(i,j));
                else
                    zeros.push_back(make_pair(i,j));
            }
        }
        for(auto q :ones)
        {
            int temp=INT_MAX;
            for(auto p:zeros)
            {
                temp=min(temp,abs(q.first-p.first)+abs(q.second-p.second));
            }
            mat[q.first][q.second]=temp;
        }
        return mat;
    }
};

o(n^2)
  
  method 2:
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int n=mat.size();
        int m=mat[0].size();
        
        vector<vector<int>>dp(n,vector<int>(m));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
              dp[i][j]=0;
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
              if(mat[i][j]==0)dp[i][j]=0;
                else
                {
                    dp[i][j]=10000;
              if(i>0)
                  dp[i][j]=min(dp[i][j],1+dp[i-1][j]);
               if(j>0)
                   dp[i][j]=min(dp[i][j],1+dp[i][j-1]);  
                }
                 
            }
        }
        for(int i=n-1;i>-1;i--)
        {
         for(int j=m-1; j>-1; j--)   
          {
            if(dp[i][j]>0)
                {
                    if(i<n-1)
                  dp[i][j]=min(dp[i][j],1+dp[i+1][j]);
               if(j<m-1)
                   dp[i][j]=min(dp[i][j],1+dp[i][j+1]);     
                }
            
            }
        }
       
        return dp;
    }
};
