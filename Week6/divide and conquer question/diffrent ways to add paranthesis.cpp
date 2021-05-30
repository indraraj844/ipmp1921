class Solution {
public:
      vector<int> helper(string input,
               map<string ,vector<int>>mp)
      {
          if(mp.find(input)!=mp.end())return mp[input];
          vector<int>res;
          for(int i=0;i<input.size();i++)
          { char c=input[i];
              if(c == '+' || c == '-' || c == '*')
              {
                  vector<int>pre=helper(input.substr(0,i),
                                       mp);
                   vector<int>post=helper(input.substr(i+1),
                                       mp);
                  for(int j=0;j<pre.size();j++)
                  {
                      for(int k=0;k<post.size();k++)
                      {
                          if(input[i]=='+')
                             res.push_back(pre[j]+post[k]);
                          if(input[i]=='-')
                             res.push_back(pre[j]-post[k]);
                          if(input[i]=='*')
                             res.push_back(pre[j]*post[k]);
                          
                      }
                  }
                  
              }
          }
           if (res.size() == 0)
        res.push_back(atoi(input.c_str()));
          
          mp[input]=res;
          return res; 
      }
    vector<int> diffWaysToCompute(string input) {
        map<string ,vector<int>>mp;
       return helper(input,mp);
    }
};
o(n^3)
  devide and conquer approach:
  what we will do we seprate the string from where element of string is a operator
    so we will store answer of first half and second half in diffrent vector;
optimization: for optimize we will take a map so we can get to know particular string
 we solve earlier or not;
note: we have to thing what we will do for res size ==0;
thank you
