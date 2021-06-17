1 using logic every member want to take the best solution
int dp[1005][1005];
long long helper(int arr[],int l,int r)
{
    if(l==r-1)return max(arr[l],arr[r]);
    else if(dp[l][r]!=-1)return dp[l][r];
    
    int left=arr[l]+min(helper(arr,l+2,r),helper(arr,l+1,r-1));
    int right=arr[r]+min(helper(arr,l+1,r-1),helper(arr,l,r-2));
    
    return dp[l][r]= max(left,right);
}
long long maximumAmount(int arr[], int n) 
{
    // Your code here
    memset(dp,-1,sizeof(dp));
    return helper(arr,0,n-1);
}
method 2
  
