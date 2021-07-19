class Solution {
public:
  //function for check square or not 
    bool perfect(int x)
    {
        long long   sr = sqrt(x);
        return (sr * sr == x);
    }
    int numSquares(int n) {
      if(perfect(n))return 1;
       int dp[n];
        dp[0]=1;
        for(int i=1;i<n;i++)
        {
            if(perfect(i+1))dp[i]=1;
            else
            {
                int m=i+1;
                for(int j=1;j<=sqrt(i+1);j++)
              {
                m=min(m,1+dp[i-j*j]);
              }
            dp[i]=m;
         }
        }
    return dp[n-1];
    }
};
