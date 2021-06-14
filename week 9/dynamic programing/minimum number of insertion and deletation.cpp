int helper(string text1, string text2,int n,int m)
    {
        int dp[n+1][m+1];
        for(int i=0;i<n+1;i++)
        {
         for(int j=0;j<m+1;j++)
         {
             if(i==0||j==0)dp[i][j]=0;
            else
              {
               if(text1[i-1]==text2[j-1])
                 dp[i][j]=1+dp[i-1][j-1];
                else
               dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
             }
         }
        }
        return dp[n][m];
    }
	
	int minOperations(string s1, string s2) 
	{ 
	    // Your code goes here
	    int n=s1.length();
	    int m=s2.length();
	    
	    int l=helper(s1,s2,n,m);
	    return n+m-(2*l);
	} 
};
