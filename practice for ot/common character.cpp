class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
      
        vector<int>cnt(26,INT_MAX);
        vector<string>res;
        for(auto s:words)
        {
            vector<int>temp(26,0);
            for(auto p:s)
                temp[p-'a']++;
            
            for(int i=0;i<26;i++)
             cnt[i]=min(cnt[i],temp[i]);
        }
        for(int i = 0; i < 26; i++)
        {
            for(int j = 0; j < cnt[i]; j++)
            {
                string str="";
                str+=(char)(i+'a');
                res.push_back(str);
            }
             
        }
        
        return res;
     
    }
};
from this question we can say for getting minimum occurance of a number we have to take 
two array one will go with loop and other one will strore the minimum value of common word


thankyou
