int longestSubsequence(int n, int a[])
    {
       vector<int>dp(n+1);
       dp[0]=1;
       for(int i=1;i<n;i++)
       {
           dp[i]=1;
           for(int j=0;j<i;j++)
           {
               if(a[i]>a[j]&&dp[i]<dp[j]+1)
               dp[i]=1+dp[j];
           }
       }
       return *max_element(dp.begin(),dp.end());
    }
need to improve o(n^2)->o(nlogn)
     
  
method 2 nlogn
 int longestSubsequence(int n, int a[])
    {
      vector<int>s;
      s.push_back(a[0]);
      for(int i=1;i<n;i++)
      {
          if(a[i]>s.back())s.push_back(a[i]);
          else
          {
            int ind=lower_bound(s.begin(),s.end(),a[i])-s.begin();
            s[ind]=a[i];
          }
      }
      return s.size();
    }
thankyou
