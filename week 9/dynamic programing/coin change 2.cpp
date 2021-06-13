number of ways to change a amount 
recursive
class Solution {
public:
    int helper(int amount ,vector<int>& coins,int n)
    {
        if(amount==0)return 1;
        else if(amount!=0 && n==0)return 0;
        else
        {
            if(coins[n-1]>amount)return helper(amount,coins,n-1);
            else
                return helper(amount,coins,n-1)
                   +helper(amount-coins[n-1],coins,n);
        }
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        return helper(amount,coins,n);
    }
};

dynamic
class Solution {
public:
    int helper(int amount ,vector<int>& coins,int n)
    {
        int dp[n+1][amount+1];
        for(int i=0;i<n+1;i++)
        {
         for(int j=0;j<amount+1;j++)
         {
            if(j==0)dp[i][j]= 1;
        else if(j!=0 && i==0)dp[i][j]= 0; 
         else
           {
            if(coins[i-1]>j)dp[i][j]=dp[i-1][j];
            else
                dp[i][j]= dp[i-1][j]+dp[i][j-coins[i-1]];
           }
         }
        }
        return dp[n][amount];    
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        return helper(amount,coins,n);
    }
};
