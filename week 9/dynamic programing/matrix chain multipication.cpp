method 1 recursion
int helper(int arr[],int i,int j)
    {
        if(i==j)return 0;
          int ans=INT_MAX;
            for(int k=i;k<j;k++)
            {
                int temp=helper(arr,i,k)+helper(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
                ans=min(ans,temp);
            }
        return ans;
    }
    int matrixMultiplication(int n, int arr[])
    {
       return helper(arr,1,n-1);
    }
method 2 memorization
int dp[100][100];
    int helper(int arr[],int i,int j)
    {
        if(i==j)return 0;
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
          int ans=INT_MAX;
            for(int k=i;k<j;k++)
            {
                int temp=helper(arr,i,k)+helper(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
                ans=min(ans,temp);
            }
        return dp[i][j]=ans;
    }
    int matrixMultiplication(int n, int arr[])
    {
        memset(dp, -1, sizeof dp);
       return helper(arr,1,n-1);
    }

method 3 tabualtion

    int matrixMultiplication(int n, int arr[])
    {
        int dp[n][n];
        for(int i=1;i<n;i++)
        {
            dp[i][i]=0;
        }
        for(int l=2;l<n;l++)
        {
         for(int i=1;i<n-l+1;i++)
         {
             int j=i+l-1;
             dp[i][j]=INT_MAX;
             for(int k=i;k<j;k++)
             {
                 int temp=dp[i][k]+dp[k+1][j]+
                       arr[i-1]*arr[k]*arr[j];
                       
                dp[i][j]=min(temp,dp[i][j]);
                       
             }
         }
        }
        return dp[1][n-1];
    }
tahnkyou
