recursive
class Solution {
public:
    bool helper(vector<int>&arr,int m,int n,int turn)
    {
        if(m==n)
        {
            return (turn==0);
        }
        else if(arr[m]==arr[n])
        {
            return helper(arr,m+1,n,1-turn)&&helper(arr,m,n-1,1-turn);
        }
        else
        {
            if(arr[m]>arr[n])
               return helper(arr,m+1,n,1-turn);
            else
            return helper(arr,m,n-1,1-turn);
        }
    }
    bool stoneGame(vector<int>& piles) {
        return helper(piles,0,piles.size()-1,1);
    }
};
dynamic
class Solution {
public:
    int dp[1005][1005];
    int f(int l,int r,vector<int>&arr)
    {
        if(l==r-1)return max(arr[l],arr[r]);
       else  if(dp[l][r]!=-1)return dp[l][r];
        
        int ifleft=arr[l]+max(f(l+2,r,arr),f(l+1,r-1,arr));
        int ifright=arr[r]+max(f(l+1,r-1,arr),f(l,r-2,arr));
        
        return dp[l][r]=max(ifleft,ifright);
    }
      
    
    bool stoneGame(vector<int>& piles) {
        int l=0,r=piles.size()-1;
        memset(dp,-1,sizeof(dp));
        
        int alax=f(l,r,piles);
        int sum=0;
        for(int i=0;i<piles.size();i++)
          sum+=piles[i];
        
        return alax>(sum-alax);
    }
};
thankyou
