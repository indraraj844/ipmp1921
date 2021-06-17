recursion
int knapSack(int w, int wt[], int val[], int n) 
    { 
      if(w==0 ||n==0)return 0;
      else if(wt[n-1]>w)
      return knapSack(w,wt,val,n-1);
      return max(knapSack(w,wt,val,n-1),
               val[n-1]+knapSack(w-wt[n-1],wt,val,n-1));
    }
dynamic
int knapSack(int w, int wt[], int val[], int n) 
    { 
        int dp[w+1][n+1];
        for(int i=0;i<w+1;i++)
        {
        for(int j=0;j<n+1;j++)
        {
        
      if(i==0 ||j==0)dp[i][j]=0;
      else if(wt[j-1]>i)
     dp[i][j]=dp[i][j-1];
     else
      dp[i][j]= max(dp[i][j-1],val[j-1]+dp[i-wt[j-1]][j-1]);
        }
        }
     return dp[w][n];
               
    }
thankyou
