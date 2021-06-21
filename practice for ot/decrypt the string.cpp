class Solution {
public:
    string freqAlphabets(string s) {
        
        string str="";
        int n=s.length();
        int i=n-1;
        while(i>=0)
        {
            if(s[i]=='#')
            {
                int l1=s[i-2]-'0';
                int l2=s[i-1]-'0';
                int l=l1*10+l2;
                char c=l-1+'a';
                 str.push_back(c);
                i-=3;
            }
            else
            {
                int l=s[i]-'1';
                char c=l+'a';
               str.push_back(c);
                i--;
            }
              
        }
        reverse(str.begin(),str.end());
        return str;
    }
};

forward traverse
class Solution {
public:
    string freqAlphabets(string s) {
        
        string str="";
        int n=s.length();
        int i=0;
        while(i<n)
        {
            if(i+2<n && s[i+2]=='#')
            {
                int l1=s[i]-'0';
                int l2=s[i+1]-'0';
                int l=l1*10+l2;
                char c=l-1+'a';
                 str.push_back(c);
                i+=3;
            }
            else
            {
                int l=s[i]-'1';
                char c=l+'a';
               str.push_back(c);
                i++;
            }
              
        }
        return str;
    }
};
thankyou
