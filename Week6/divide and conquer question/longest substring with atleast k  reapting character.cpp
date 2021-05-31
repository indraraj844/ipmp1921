method 1 brute force
class Solution {
public:
    bool atleastK(int freq[],int k)
    {
        for(int i=0;i<26;i++)
        {
            if(freq[i]!=0 &&freq[i]<k)
                return false;
        }
        return true;
    }
    void setZero(int freq[])
    {
        for(int i=0;i<26;i++)
            freq[i]=0;
    }
    int longestSubstring(string s, int k) {
        int l=s.length();
        int freq[26];
        int max_=0;
        for(int i=0;i<l;i++)
        {
            setZero(freq);
            for(int j=i;j<l;j++)
            {
                freq[s[j]-'a']++;
                if(atleastK(freq,k))
                {
                    max_=max(max_,j-i+1);
                }
            }
            
        }
        return max_;
    }
};
o(n^2)
  
  method 2:
  efficent method
  devide and conquer
  o(nlogn)
  
  method 3:
sliding window:o(n)
  
