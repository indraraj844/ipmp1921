
method 1 using map
class Solution{
    public:
    int longestKSubstr(string s, int k) {
    // your code here
    map<char,int>mp;
   int i=0,j=0,length=0;
   int count=0;
   
   while(j<s.length())
   { 
       while(count>k)
           {
               mp[s[i]]--;
               if(mp[s[i]]==0)
               {
                   count--;
                   mp.erase(s[i]);
               }
               
               i++;
           }
        if(mp[s[j]]==0)
        {
            count++;
        }
       mp[s[j]]++;
       
     if(count==k)
       {
           length=max(j-i+1,length);
       }
       j++;
   }
   if(length==0)return -1;
    return length;
    }
};
method 2:
int longestKSubstr(string s, int k) {
        vector<int> counts(26, 0);
        int start = 0;
        int maxCharCount = 0;
        int n = s.length();
        int result = 0;
        for(int end = 0; end < n; end++){
            counts[s[end]-'A']++;
            if(maxCharCount < counts[s[end]-'A']){
                maxCharCount = counts[s[end]-'A'];
            }
            while(end-start-maxCharCount+1 > k){
                counts[s[start]-'A']--;
                start++;
                for(int i = 0; i < 26; i++){
                    if(maxCharCount < counts[i]){
                        maxCharCount = counts[i];
                    }
                }
            }
            result = max(result, end-start+1);
        }
        return result;
    }
};
code for printing substring with k unique charcter
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
#define CHAR_RANGE 128

string findLongestSubstring(string str, int k, int n)
{
    int end = 0, begin = 0;
    unordered_set<char> window;
    int freq[CHAR_RANGE] = { 0 };
    for (int low = 0, high = 0; high < n; high++)
    {
        window.insert(str[high]);
        freq[str[high]]++;
        while (window.size() > k)
        {
            if (--freq[str[low]] == 0) {
                window.erase(str[low]);
            }
 
            low++;
        }
        if (end - begin < high - low)
        {
            end = high;
            begin = low;
        }
    }
    return str.substr(begin, end - begin + 1);
}
need to change

 
int main()
{
    string str = "abcbdbdbbdcdabd";
    int k = 2;
 
    int n = str.length();
    cout << findLongestSubstring(str, k, n);
 
    return 0;
}



