class Solution {
public:
    string sortString(string s) {
    int table[26]={0};
    for(int i=0;i<s.length();i++)table[s[i]-'a']++;
    
        string answer;
        int n;
      do
      {
          n=answer.length();
          for(int i=0;i<26;i++)
          {
              if(table[i])
              {
                 answer+=i+'a';
                 table[i]--; 
              }  
          }
          for(int i=25;i>-1;i--)
          {
              if(table[i])
              {
                   answer+=i+'a';
                 table[i]--;
              } 
          }
          
      }while(n!=s.length());
        return answer;
    }
};
thankyou
