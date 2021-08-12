class Solution {
public:
    int minSwaps(string s) {
        int n=s.length(),bal=0,swaps=0;
        int end=n-1;
        
        for(int i=0;i<n;i++)
        {
          bal= s[i]=='['?bal+1:bal-1;
          if(bal<0)
          {
             while(s[end]==']')end--;
              swap(s[end],s[i]);
              swaps++;
              
              bal=1; 
          }
        }
        return swaps;
    }
};
