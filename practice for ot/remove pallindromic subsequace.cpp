class Solution {
public:
    int removePalindromeSub(string s) {
       int ans=2;
        string temp=s;
        reverse(s.begin(),s.end());
        if(temp==s) ans--;
        return ans;
    }
};
//find the minimum number of pallindromic strings
