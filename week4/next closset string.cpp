method 1 naive approach
class Solution {
public:
    bool isPallindrome(int n)
    {
        string st=to_string(n);
        int len=st.length();
        if(len==1)return true;
        int mid=len/2;
        int i=mid-1;
        int j=(len%2)?mid+1:mid;
        
        while(i>-1)
        {
            if(st[i]!=st[j])
                return false;
            else
                {
                    i--;j++;
                }
        }
        return true;
        
    }
    string nearestPalindromic(string str) {
       int len=str.length();
        int n=stoi(str);
       int low=n-1,high=n+1;
        
         if(len==1)
         {
             str=to_string(low);
             return str;
        }
        while(!isPallindrome(low))low--;
        while(!isPallindrome(high))high++;
        
        if(high-n>=n-low)
            return to_string(low);
        return to_string(high);
        
        
    }
};
[not valid for big cases]
metnod 2:
mirror of left or right
