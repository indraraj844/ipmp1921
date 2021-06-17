dynamic 
 long long noOfWays(int m, int n , int x) {
        // code here
        long long dp[n+1][x+1];
        for(int i=0;i<n+1;i++)
        {
        for(int j=0;j<x+1;j++)
        {
            if(i==0 &&j==0)dp[i][j]=1;
            else if(i==0 && j)dp[i][j]=0;
            else
            {
                long long   ans=0;
                for(int k=1;k<=m&&k<=j;k++)
                {
                    ans+=dp[i-1][j-k];
                }
                dp[i][j]=ans;
            }
        }
        }
        return dp[n][x];
    }
    
recursion
 long long noOfWays(int m, int n , int x) {
        // code here
        if(n==0 &&x==0)return 1;
        else if(n==0 & x)return 0;
        
        long long ans=0;
        for(int i=1;i<=x&& i<=m;i++)
          ans+=noOfWays(m,n-1,x-i);
          
          return ans;
    }
    thankyou
    
