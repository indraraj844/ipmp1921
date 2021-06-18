recursion
bool dictionarycontain(string str,vector<string> &b)
 {
     for(int i=0;i<b.size();i++)
     {
         if(b[i].compare(str)==0)return true;
     }
     return false;
 }
int wordBreak(string str, vector<string> &b) {
    //code here
    int size=str.size();
    if(size==0)return 1;
    
    for(int i=1;i<=size;i++)
    {
        if(dictionarycontain(str.substr(0,i),b) &&wordBreak(str.substr(i,size-i),b))
        return 1;
    }
    return 0;
}
dynamic
int wordBreak(string str, vector<string> &b) {
    //code here
    int n=str.size(); 
    int dp[n+1];
    memset(dp,-1,sizeof(dp));
    dp[n]=1;
    
    unordered_set<string>s;
    for(int i=0;i<b.size();i++)
      s.insert(b[i]);
      
   for(int i=n-1;i>-1;i--)
   {
       string word;
       for(int j=i;j<n;j++)
       {
           word.push_back(str[j]);
           if(s.find(word)!=s.end())
           {
               if(dp[j+1])dp[i]=1;
           }
       }
   }
    return dp[0];
}
other logic for dynamic programing
class Solution {
public:
    bool wordBreak(string s, vector<string>&dict) {
    
        if(dict.size() == 0)
            return false;
        int n = s.size();
        bool t[n + 1];
        memset(t, false, sizeof(t));
        t[0] = true;
        
         for(int i = 1; i <= s.size(); i++)
        {
            for(int j = i - 1;j >= 0; j--)
            {
                if(t[j])
                {
                    string str = s.substr(j, i - j);
					auto it = find(dict.begin(), dict.end(), str);  
                    if(it != dict.end())
                    {
                        t[i] = true;
                        break; 
                    }
                }
            }
        }
        
        return t[n];
    }   
    
};
thankyou

