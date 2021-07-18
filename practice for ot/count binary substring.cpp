method 1: brute force
class Solution {
public:
    bool check(string s,int i,int j)
    {
        int zero=0,first=0;
        int flag=0;
        for(int k=i;k<j+1;k++)
        {
            if(i<k && s[k]!=s[k-1])
            {
                if(flag==1)return false;
                flag++;
            }
            if(s[k]=='0')zero++;
            else
                first++;
        }
        return first==zero;
    }
    int countBinarySubstrings(string s) {
        int l=s.length();
        int count=0;
        for(int i=0;i<l-1;i++)
        {
         for(int j=i+1;j<l;j++)
         {
           if(check(s,i,j))
           {
               cout<<s.substr(i,j-i+1)<<" ";
               count++; 
           }
         }
        }
        return count;
    }
};
method 2 improved version of brute force
  class Solution {
public:
    int countBinarySubstrings(string s) {
        int l=s.length();
        int count=0;
        for(int i=0;i<l;i++)
        {
             int zero=0,first=0;
             int flag=0;
         for(int j=i;j<l;j++)
         {
             if(j>i &&s[j]!=s[j-1])
            {
                if(flag==1)break;
                else
                flag++;
            }
            if(s[j]=='0')zero++;
             else
              {first++;
               }
           if(first==zero)
           {
             
               count++;
           }
         }
            
        }
        return count;
    }
};
method 3 : efficent
class Solution {
public:
    int countBinarySubstrings(string s) {
  int count=0,i=1,prev=0,curr=1;
    while(i<s.length())
    {
       if(s[i]!=s[i-1])
       {
          count+=min(curr,prev);
           prev=curr;
           curr=1;
       }
        else
        {
            curr++;
        }
        i++;
    }
        return count+=min(curr,prev);
}
};
