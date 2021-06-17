dynamic 
  int helper(string text1, string text2,int n,int m)
    {
        int dp[n+1][m+1];
        for(int i=0;i<n+1;i++)
        {
         for(int j=0;j<m+1;j++)
         {
             if(i==0)dp[i][j]=j;
             else if(j==0)dp[i][j]=i;
            else
              {
               if(text1[i-1]==text2[j-1])
                 dp[i][j]=dp[i-1][j-1];
                else
               dp[i][j]= 1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
             }
         }
        }
        return dp[n][m];
    }
    int editDistance(string s, string t) {
        // Code here
        int n=s.length();
        int m=t.length();
        return  helper(s,t,n,m);
    }
recursion
int helper(string text1, string text2,int n,int m)
    {
        if(m==0)return n;
        else if(n==0)return m;
        else
        {
             if(text1[n-1]==text2[m-1])
              return helper(text1,text2,n-1,m-1);
              
              return 1+min(helper(text1,text2,n-1,m-1),min(
                  helper(text1,text2,n-1,m),helper(text1,text2,n,m-1)));
        }
    }
    int editDistance(string s, string t) {
        // Code here
        int n=s.length();
        int m=t.length();
        return  helper(s,t,n,m);
    }
thankyou
