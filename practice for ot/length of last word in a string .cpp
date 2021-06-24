class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;
        int count=0;
      for(int j=i;j>-1;j--)
      {
          if(s[j]==' '&&count>0)
          {
              break;
          } 
          if(s[j]!=' ')
             count++;
      }
        return count;
    }
};
