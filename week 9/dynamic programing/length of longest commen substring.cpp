 int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        int dp[n+1][m+1];
        int res=0;
        for(int i=0;i<n+1;i++)
        {
         for(int j=0;j<m+1;j++)
         {
             if(i==0||j==0)dp[i][j]=0;
            else
              {
               if(s1[i-1]==s2[j-1])
               {
                    dp[i][j]=1+dp[i-1][j-1];
                    res=max(res,dp[i][j]);
               }
                
                else
               dp[i][j]= 0;
             }
         }
        }
    return res;
    }
thankyou
