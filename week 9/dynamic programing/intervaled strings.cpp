//lcs method
string helper(string X,string Y)
  {
       int m = X.length();
          int n = Y.length();
        
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if(i == 0)
                dp[i][j] = 0;
            else if(j == 0)
                dp[i][j] = 0;
            else if(X[i - 1] == Y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] =  max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    int index = dp[m][n];
    string str;
    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (X[i - 1] == Y[j - 1])
        {
            str.push_back(X[i - 1]);
            i--, j--, index--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            j--, index--;
        }
        else
        {
            i--, index--;
        }
    }
   
    reverse(str.begin(), str.end());
    return str;
  }
       
    bool isInterleave(string A, string B, string C) 
    {
        string s1=helper(C,A);
        string s2=helper(C,B);
        cout<<s1<<" "<<s2<<endl;
        if(s1==A && s2==B)return true;
        return false;
    }
//not work well

method 2 recursive call
 bool helper(string a,string b,string c,int n,int m,int l)
    {
        if(!l &&!m &&!n)return true;
        else if(!l && (m||n))return false;
        else
        {
            if(c[l-1]==a[n-1]&&n>0&&c[l-1]==b[m-1]&&m)
            return helper(a,b,c,n-1,m,l-1)||helper(a,b,c,n,m-1,l-1);
            if(c[l-1]==a[n-1] &&n>0)
            return helper(a,b,c,n-1,m,l-1);
             if(c[l-1]==b[m-1]&&m>0)
            return helper(a,b,c,n,m-1,l-1);

        }
    }
       
    bool isInterleave(string a, string b, string c) 
    {
        return helper(a,b,c,a.length(),b.length(),c.length());
    }

};
//need to change

method 3 dynamic programing
 bool helper(string a,string b,string c,int n,int m,int l)
    {
        bool dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0&&j==0)dp[i][j]=true;
                else if(i==0)
                {
                    if(b[j-1]==c[j-1])
                    dp[i][j]=dp[i][j-1];
                }
                else if(j==0)
                {
                    if(a[i-1]==c[i-1])
                    dp[i][j]=dp[i-1][j];
                }
                else
                {
                    if(a[i-1]==c[i+j-1]&&b[j-1]!=c[i+j-1])
                    dp[i][j]=dp[i-1][j];
                    if(a[i-1]!=c[i+j-1]&&b[j-1]==c[i+j-1])
                    dp[i][j]=dp[i][j-1];
                    if(a[i-1]==c[i+j-1]&&b[j-1]==c[i+j-1])
                    dp[i][j]=dp[i-1][j]||dp[i][j-1];
                    
                }
                
            }
        }
        return dp[n][m];
    }    
       
    bool isInterleave(string a, string b, string c) 
    {
        return helper(a,b,c,a.length(),b.length(),c.length());
    }

thankyou
