class Solution {
public:
    bool validPalindrome(string s) {
    
        for(int l=0,r=s.size()-1;l<r;l++,r--)
        {
            if(s[l]!=s[r])
            {
                int l1=l+1,l2=l,r1=r,r2=r-1;
            while(l1<r1){if(s[l1]==s[r1]){l1++,r1--;}}
            while(l2<r2){if(s[l2]==s[r2]){l2++,r2--;}}
                
                return l1>=r1 ||l2>=r2;
            }
        }
        return true;
    }
};
thankyou
