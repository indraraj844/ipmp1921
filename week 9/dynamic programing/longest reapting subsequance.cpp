print length
int helper(string text1,int n)
    {
        int dp[n+1][n+1];
        for(int i=0;i<n+1;i++)
        {
         for(int j=0;j<n+1;j++)
         {
             if(i==0||j==0)dp[i][j]=0;
            else
              {
               if(text1[i-1]==text1[j-1]&&i!=j)
                 dp[i][j]=1+dp[i-1][j-1];
                else
               dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
             }
         }
        }
        return dp[n][n];
    }
		int LongestRepeatingSubsequence(string str){
		   int n=str.size();
		   string temp=str;
		   reverse(str.begin(),str.end());
		   return helper(str,n);
		}

};

if we have to print
int i=n,j=n;
        string res;
        while(i>0 && j>0)
        {
            if(dp[i][j]==dp[i-1][j-1]+1)
            {
                res+=text1[i-1];
                i--;j--;
            }
            else if(dp[i][j]==dp[i-1][j])
             {
                 i--;
             }
             else
             j--;
        }
        reverse(res.begin(),res.end());
        return res;
thankyou
