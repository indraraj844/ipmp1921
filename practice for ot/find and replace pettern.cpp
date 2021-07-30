class Solution {
public:
    bool check(string s,string t)
    {
        if(s.length()!=t.length())return false;
        else
        {
            unordered_map<char,char>mp;
            unordered_map<char>st;
         for(int i=0;i<s.length();i++)
         {
           if(mp.find(s[i])==mp.end()&& st.count(t[i])==0)
           {
               mp[s[i]]=t[i];
               st.insert(t[i]);
           }
          else if(mp.find(s[i])==mp.end()&& st.count(t[i]))return false;
          else if(mp[s[i]]!=t[i])return false;
             
         }
            return true;
        }
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
    for(auto p:words)
    {
        if(check(p,pattern))ans.push_back(p);
    }
        return ans;
    }
};
