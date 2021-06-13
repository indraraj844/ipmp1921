	public:
	int helper(int arr[],int n ,int sum,int restsum)
	{
	    if(n==0)return abs(sum-restsum);
	    return min(helper(arr,n-1,sum,restsum),
	              helper(arr,n-1,sum+arr[n-1],restsum-arr[n-1]));
	}
	int minDifference(int arr[], int n) 
	{ 
	    // Your code goes here
	   int sum=0;
	   for(int i=0;i<n;i++)
	   sum+=arr[i];
	   
	   return helper(arr,n,0,sum);
	} 
};
dynamic
	public:
	int helper(int arr[],int n ,int sum)
	{
	    int dp[n+1][sum+1];
	     for(int i=0;i<n+1;i++)
	     {
	         for(int j=0;j<sum+1;j++)
	         {
	             if(j==0)dp[i][j]= true;
	             else if(j!=0 && i==0)dp[i][j]= false;
	             else
	             {
	                 if(arr[i-1]>j)
	                 dp[i][j]=dp[i-1][j];
	                 else
	                 dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
	             }
	         }
	     }
	     int diff=0;
	     for(int j=sum/2;j>=0;j--)
	     {
	         if(dp[n][j])
	         {
	             diff=sum-2*j;
	             break;
	         }
	     }
	     return diff;
	}
	int minDifference(int arr[], int n) 
	{ 
	    // Your code goes here
	   int sum=0;
	   for(int i=0;i<n;i++)
	   sum+=arr[i];
	   
	   return helper(arr,n,sum);
	} 
};

