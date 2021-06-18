long long fact(int n)
	{
	    if(n==0)return 1;
	    long long res=1;
	    for(int i=1;i<=n;i++)
	    {
	        res*=i;
	    }
	    return res;
	}
	long long get(int n,int i)
	{
	    return (fact(n))/((fact(n-i)*fact(i)));
	}
	ll countStrings(int n) {
	    // code here
	  long long sum=1;
	  for(int i=1;i<(n+1)/2;i++)
	  {
	      sum+=get(n,i);
	  }
	  if(n%2)sum+=1;
	  else
	  sum+=2;
	  
	  return sum;
	}
dynamic approach most
ll countStrings(int n) {
	    // code here
	 long long dp[n+1];
	 dp[0]=1;
	 dp[1]=2;
	 for(int i=2;i<=n;i++)
	 {
	   dp[i]=((dp[i-1]%1000000007)+(dp[i-2]%1000000007))%1000000007;
	 }
	 return dp[n]%1000000007;
	}
};
