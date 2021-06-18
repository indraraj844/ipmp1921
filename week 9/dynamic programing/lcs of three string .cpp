recursion
int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
{
    // your code here
    if(n1==0 ||n2==0 ||n3==0)return 0;
    else if(A[n1-1]==B[n2-1] && B[n2-1]==C[n3-1])
      return LCSof3(A,B,C,n1-1,n2-1,n3-1);
      else
        {
        int p=LCSof3(A,B,C,n1-1,n2,n3);
        int q=LCSof3(A,B,C,n1,n2-1,n3);
        int r=LCSof3(A,B,C,n1,n2,n3-1);
        
        return max(p,max(q,r));
        }
}
dynamic
int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
{
    int dp[n1+1][n2+1][n3+1];
    for(int i=0;i<n1+1;i++)
    {
    for(int j=0;j<n2+1;j++)
    {
    for(int k=0;k<n3+1;k++)
    {
     if(i==0||j==0||k==0)
     dp[i][j][k]=0;
     else if(A[i-1]==B[j-1] && B[j-1]==C[k-1])
     dp[i][j][k]=dp[i-1][j-1][k-1]+1;
     
      else
        {
        int p= dp[i-1][j][k];
        int q= dp[i][j-1][k];
        int r= dp[i][j][k-1];
        
         dp[i][j][k]=max(p,max(q,r));
        }
    }
    }
    }
return dp[n1][n2][n3];
}
tabulation
thankyou
