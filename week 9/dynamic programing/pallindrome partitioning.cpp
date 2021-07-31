 class Solution{
public:
int dp[1000][1000];
    bool ispallindrome(string s,int i,int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])return false;
            i++;j--;
        }
        return true;
    }
    int helper(string str,int low,int high)
    {
        if(low==high ||ispallindrome(str,low,high))return 0;
        
        else if(dp[low][high]!=-1)return dp[low][high];
        int ans=INT_MAX;
        for(int k=low;k<high;k+=1)
        {
            int temp=1+helper(str,low,k)+helper(str,k+1,high);
            ans=min(temp,ans);
        }
        return dp[low][high]=ans;
        
    }
    int palindromicPartition(string str)
    {
        memset(dp,-1,sizeof(dp));
        return helper(str,0,str.length()-1);
    }
};
method 2
 class Solution{
public:
int dp[1000][1000];
    bool ispallindrome(string s,int i,int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])return false;
            i++;j--;
        }
        return true;
    }
    string convert(int i,int j)
    {
        return to_string(i)+""+to_string(j);
    }
    int helper(string str,int low,int high,unordered_map<string,int>&memo)
    {
        if(low>high)return 0;
        
        string ij=convert(low,high);
        
         if(memo.find(ij)!=memo.end())return memo[ij];
        if(low==high)
        {
            memo[ij]=0;
            return 0;
        }
        if (ispallindrome(str, low, high)) {
        memo[ij] = 0;
        return 0;
      }
        int ans=INT_MAX;
        for(int k=low;k<high;k+=1)
        {
            int left_min=INT_MAX;
            int right_min=INT_MAX;
            string left=convert(low,k);
            string right=convert(k+1,high);
            
            if(memo.find(left)!=memo.end())
              left_min=memo[left];
             if(memo.find(right)!=memo.end())
                right_min=memo[right];
            
            if(left_min==INT_MAX)
            left_min=helper(str,low,k,memo);
             if( right_min==INT_MAX)
            right_min=helper(str,k+1,high,memo);
            
            ans=min(ans,left_min+right_min+1);
            
              
        }
        return memo[ij]=ans;
        
    }
    int palindromicPartition(string str)
    {
        unordered_map<string, int> memo;
        return helper(str,0,str.length()-1,memo);
    }
};
o(n^2)
 
