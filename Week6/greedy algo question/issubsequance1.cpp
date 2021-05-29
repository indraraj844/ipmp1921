class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.length();
        int m=t.length();
        int j=0,i=0;
        if(n==0)return true;
        else if(m==0)return false;
        while(i<n)
        {
            if(s[i]==t[j]&&j!=m)
            {i++;j++;  
            }
        
            else
                j++;
            
                if(j==m)break;
        }
          if(j==m&&i!=n)
              return false;
        return true;
        
        
    }
};
o(n)
  
