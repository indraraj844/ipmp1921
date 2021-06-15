 int dp[100][100];
    bool ispallindromic(string str,int i,int j)
    {
        while(i<j)
        {
            if(str[i]!=str[j])return false;
            i++;
            j--;
        }
        return true;
    }
    int helper(string str,int i,int j)
    {
        if( i >= j ||  ispallindromic(str, i, j) )
         return 0;
         if(dp[i][j]!=-1)return dp[i][j];
         
    int ans = INT_MAX, count;
    for(int k = i; k < j; k++)
    {
      count = helper(str, i, k) +
        helper(str, k + 1, j) + 1;
  
      ans = min(ans, count);
    }
    return dp[i][j]=ans;
    }
    int palindromicPartition(string str)
    {
      int n=str.length();
      memset(dp,-1,sizeof(dp));
      return helper(str,1,n-1);
    }
};
need to change
