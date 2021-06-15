class Solution
{
	public:
	int dp[100][100];
	set<string> findLCS(string X, string Y, int m, int n)
{
    set<string> s;
    if (m == 0 || n == 0)
    {
        s.insert("");
        return s;
    }
    if (X[m - 1] == Y[n - 1])
    {
        set<string> tmp = findLCS(X, Y, m - 1, n - 1);
        for (string str : tmp)
            s.insert(str + X[m - 1]);
    }
    else
    {
        if (dp[m - 1][n] >= dp[m][n - 1])
            s = findLCS(X, Y, m - 1, n);
        if (dp[m][n - 1] >=dp[m - 1][n])
        {
            set<string> tmp = findLCS(X, Y, m, n - 1);
            s.insert(tmp.begin(), tmp.end());
        }
    }
    return s;
}
	int lcs(string text1,string text2,int n,int m)
	{
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
		vector<string> all_longest_common_subsequences(string s, string t)
		{
		   int n=s.length();
		   int m=t.length();
		   vector<string>v;
		   set<string>p=findLCS(s,t,n,m);
		   int l=lcs(s,t,n,m);
		 for(auto s:p)
		 {
		     if(s.length()==l)
		     v.push_back(s);
		 }
		 return v;
		}
};
need to change
