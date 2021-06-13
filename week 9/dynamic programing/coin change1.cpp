//minimum number of coin to change amount
class Solution {
public:
    int helper(vector<int>& coins, int amount,int n)
    {
        int tp[n+1][amount+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<amount+1;j++)
            {
                if(j==0)tp[i][j]=0;
                 else if(i==0 && j!=0)
                    tp[i][j]=INT_MAX-1;
                else if(i==1)
                {
                    if(j%coins[0]==0)
                        tp[i][j]=j/coins[0];
                    else
                        tp[i][j]=INT_MAX-1;
                }
            }
        }
        for(int i=2;i<n+1;i++)
        {
            for(int j=1;j<amount+1;j++)
            {
                if(coins[i-1]>j)
                tp[i][j]=tp[i-1][j];
                else
                tp[i][j]=min(1+tp[i][j-coins[i-1]],tp[i-1][j]);
            }
        }
        
        if(tp[n][amount]==INT_MAX-1)
            return -1;
        return tp[n][amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
     return helper(coins,amount,n);
    }
};
thankyou
