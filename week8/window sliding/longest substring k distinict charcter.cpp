method 1 using map
map size()==j-i+1(window size)
  
  class Solution {
public:
    int lengthOfLongestSubstring(string str)
    {
        int n=str.length();
        if(n<2)return n;
        else
            {
                map<char,int>mp;
                int i=0,j=0,max_length=INT_MIN,count=0,count1=0;
             while(j<n)
          {
                  if(mp[str[j]]==0)
                  count++;
                 
                 
             mp[str[j]]++;
                 
            while(count<j-i+1)
            {
                  mp[str[i]]--;
                   
                   if(mp[str[i]]==0)
                   {
                   mp.erase(str[i]);
                   count--;
                   }
                 i++;
            }         
        max_length=max(max_length,j-i+1);
                j++;
             
          }
            
            return max_length;
        }
    }
};
methdd 2
  class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <int> mp(128, -1);
        int ptr2=-1, ptr1 = 0;
        int ans = 0;
        while (ptr1 < s.length()) {
            int t = (int)s[ptr1];
            if (mp[t] != -1 && mp[t] > ptr2){
                ptr2 = mp[t];
            }
            ans = max(ans, ptr1 - ptr2);
            mp[t] = ptr1;
            ptr1++;
        }
        return ans;
    }
};
thankyou
