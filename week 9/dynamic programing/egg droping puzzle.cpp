1.recursion
  int eggDrop(int n, int k) 
    {
      if(k==0||k==1)return k;
      else if(n==1)return k;
      int ans=INT_MAX;
      for(int x=1;x<=k;x++)
     {
         int res=max(eggDrop(n-1,x-1),eggDrop(n,k-x));
         ans=min(res,ans);
     }
      return ans+1;
    }

method 2 dynamic programing
 int eggDrop(int n, int k) 
    {
    int dp[n+1][k+1];
    for(int i=0;i<n+1;i++)
    {
     for(int j=0;j<k+1;j++)
     {
         if(j==0||j==1||i==1)dp[i][j]=j;
         else
         {
             int ans=INT_MAX;
      for(int x=1;x<=j;x++)
     {
         int res=max(dp[i-1][x-1],dp[i][j-x]);
         ans=min(res,ans);
     }
      dp[i][j]=ans+1;
         }
     }
   
    }
      return dp[n][k];
    }
};
more efficent method 3 binary search 
 int binomialCoeff(int x, int n, int k)
{
    int sum = 0, term = 1;
    for (int i = 1; i <= n; ++i) {
        term *= x - i + 1;
        term /= i;
        sum += term;
          if(sum>k)
          return sum;
    }
    return sum;
}
    int superEggDrop(int n, int k) {
    int low=1,high=k;
    while(low<high)
    {
        int mid=low+ (high-low)/2;
        if (binomialCoeff(mid, n, k) < k)
            low = mid + 1;
        else
            high=mid;
    }
        return low;
    }
};
    thankyou
    
