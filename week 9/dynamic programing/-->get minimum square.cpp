	int MinSquares(int n)
	{
	    if(ceil(sqrt(n))==floor(sqrt(n)))return 1;
	   int dp[n+1];
	   dp[0]=0,dp[1]=1;
	   for(int i=2;i<n+1;i++)
	   {
	       
	           if(ceil(sqrt(n))==floor(sqrt(n)))dp[i]=1;
	           else
	           {
	           int ans=INT_MAX;
	          for(int j=1;j<=sqrt(i);j++)
	             {   
	                 int temp=1+dp[i-j*j];
	                 ans=min(ans,temp);
	             }
	             dp[i]=ans;
	           }
	   }
	   return dp[n];
	}
thankyou
