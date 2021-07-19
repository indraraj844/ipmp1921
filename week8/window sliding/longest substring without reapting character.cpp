method 1 brute force
method 2 sliding window
class Solution {
public:
   
    int lengthOfLongestSubstring(string s) {
        if(s=="")return 0;
     int max_length=1;
     int count=0;
     unordered_map<char,int>mp;
    int i=0,j=0;
    while(j<s.length())
    {
     if(mp[s[j]]==0)count++;
    
        mp[s[j]]++;
        
      while(count<j-i+1)
         {
         if(mp[s[i]]==1)count--;
         
         mp[s[i]]--;
         i++;
         }  
     max_length=max(max_length,j-i+1);
         j++;
    }
    
        return max_length;
    }
};
method 3
  
