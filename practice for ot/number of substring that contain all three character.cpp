class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length();
        int ans=0;
        int left=0,right=0;
        unordered_map<char,int>mp;
       
       while(left<n && right<n)
       {
           mp[s[right]]++;
           while(mp.size()==3)
           {
              ans+=n-right;
              if(mp[s[left]]>1)mp[s[left]]--;
               else
               {
                   mp.erase(s[left]);
               }
               left++;
           }
           right++;
       }
        return ans;
    }
};
