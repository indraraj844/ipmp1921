class Solution {
public:
    string sortSentence(string s) {
       int n=s.length();
        vector<string>v(9);
         string x=" ";
        int c=0;
        for(int i=0;i<n;i++)
        {
           if(s[i]>'0'&&s[i]<='9')
           {
               int pos=s[i]-'0'-1;
               v[pos]=x;
               x="";
               c++;
               
           }
            else
                x+=s[i];
        }
        x="";
        v[0].erase(v[0].begin()+0);
        for(int i=0;i<c;i++)
        {
            x+=v[i];
        }
        return x;
    }
};

for storing this type we required one array so we used v array for that 
also we don't know how many element are there in words array so we use c for it
  we have to get exject position of a string 
  thankyou
  
