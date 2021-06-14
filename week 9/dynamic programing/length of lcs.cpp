recursive
class Solution {
public:
    int helper(string text1, string text2,int n,int m)
    {
          if(n==0)return 0;
        else if(!m)return 0;
        else
        {
            if(text1[n-1]==text2[m-1])
                return 1+helper(text1,text2,n-1,m-1);
            return max(helper(text1,text2,n-1,m)
                       ,helper(text1,text2,n,m-1));
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m=text2.length();
        
        return helper(text1,text2,n,m);
    }
};

dynamic approach
class Solution {
public:
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
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m=text2.length();
        
        return helper(text1,text2,n,m);
    }
};
thankyou
