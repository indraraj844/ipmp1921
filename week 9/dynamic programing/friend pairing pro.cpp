method 1 dp
int countFriendsPairings(int n) 
    { 
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<n+1;i++)
        {
            dp[i]=dp[i-1]+(i-1)*dp[i-2];
        }
        return dp[n]%1000000007;
    }
method 2 more space efficent 
 put a b c here
 
