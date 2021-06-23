class Solution {
public:
    int numDifferentIntegers(string word) {
       set<string>st;
       int i=0;
        while(i<word.length())
        {
            if(word[i]>='0' &&word[i]<='9')
          {
                string s="";
            while(word[i]>='0' &&word[i]<='9')
            {
                s+=word[i];
                i++;
            }
                while(s[0]=='0')s.erase(s.begin()+0);
                
                
                cout<<s<<" ";
                st.insert(s);
          }
            else 
                i++;
        }
        return st.size();
    }
};
thankyou
