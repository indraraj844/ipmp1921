recursion
class Solution {
public:
    bool isScramble(string s1, string s2) {
        if(s1.size()==1)return s1==s2;
        else if(s1==s2)return true;
        
        int n=s1.size();
        for(int i=1;i<n;i++)
        {
        if(isScramble(s1.substr(0,i),s2.substr(0,i))&&isScramble(s1.substr(i),s2.substr(i))
    ||isScramble(s1.substr(0,i),s2.substr(n-i))&&
           isScramble(s1.substr(i),s2.substr(0,n-i)))
            return true;
        }
        return false;
    }
};
dynamic programing
class Solution {
public:
    unordered_map<string,bool>mp;
    bool helper(string s1,string s2)
    {
         if(s1.size()==1)return s1==s2;
        else if(s1==s2)return true;
        
        if(mp.find(s1+s2)!=mp.end())
        {
            return mp[s1+s2];
        }
        
        int n=s1.size();
        for(int i=1;i<n;i++)
        {
        if(isScramble(s1.substr(0,i),s2.substr(0,i))&&isScramble(s1.substr(i),s2.substr(i))
    ||isScramble(s1.substr(0,i),s2.substr(n-i))&&
           isScramble(s1.substr(i),s2.substr(0,n-i)))
            return mp[s1+s2]=true;
        }
        return mp[s1+s2]=false;
    }
    bool isScramble(string s1, string s2) {
       return helper(s1,s2);
    }
};
using dp (mp for subproblem overlaping)
  
  extra more efficent
  class Solution {
public:
    unordered_map<string,bool>mp;
    bool helper(string s1,string s2)
    {
         if(s1.size()==1)return s1==s2;
        else if(s1==s2)return true;
        
        if(mp.find(s1+s2)!=mp.end())
        {
            return mp[s1+s2];
        }
        
        int n=s1.size();
        vector<int> f1(26,0),f2(26,0);
        for(int i=0;i<n;i++)
        {
            f1[s1[i]-'a']++;
             f2[s2[i]-'a']++;
            
        }
        if(f1!=f2)return false;
        for(int i=1;i<n;i++)
        {
        if(isScramble(s1.substr(0,i),s2.substr(0,i))&&isScramble(s1.substr(i),s2.substr(i))
    ||isScramble(s1.substr(0,i),s2.substr(n-i))&&
           isScramble(s1.substr(i),s2.substr(0,n-i)))
            return mp[s1+s2]=true;
        }
        return mp[s1+s2]=false;
    }
    bool isScramble(string s1, string s2) {
       return helper(s1,s2);
    }
};
if frequancy are not same then return false that's solve
  
