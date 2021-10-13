class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
       int n=prices.size();
        
        int buy[n+1][k+1],sell[n+1][k+1];
        
        for(int i=0;i<=n;i++)
        {
            buy[i][0]=0;
            sell[i][0]=0;
        }
        for(int i=0;i<=k;i++)
        {
            buy[0][i]=INT_MIN;
            sell[0][i]=0;
        }
        
        for(int i=1;i<=n;i++)
        {
         for(int j=1;j<=k;j++)
         {
             buy[i][j]=max(buy[i-1][j],sell[i][j-1]-prices[i-1]);
             sell[i][j]=max(sell[i-1][j],buy[i-1][j]+prices[i-1]);
         }
        }
        return sell[n][k];
    }
};
