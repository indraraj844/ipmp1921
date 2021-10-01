method 1
  class Solution {
public:
    void helper(int n,string op,vector<string>& v)
    {
        if(op.length()==n)
        {
            v.push_back(op);
            return;
        }
        string op1=op;
        string op2=op;
        op1.push_back('1');
        op2.push_back('0');
        helper(n,op1,v);
        helper(n,op2,v);
    }
    string findDifferentBinaryString(vector<string>& nums) {
        vector<string>v;
        string op="";
        helper(nums.size(),op,v);
        
        unordered_map<string,int>mp;
        for(auto t:nums)mp[t]++;
        string ans="";
        for(auto t:v)
        {
            if(mp.find(t)==mp.end()){
                ans=t;
                break;
            }
        }
        return ans;
    }
};
method 2 efficent
class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        
        int k = nums.size();
        map<string,int>mp;
        string str,str1;
        for(int i=0;i<k;i++)
        {
            str += '0';
            str1 += '1';
        }
        for(auto &i:nums)
        {
            mp[i]++;
        }
        if(mp.find(str)==mp.end())
            return str;
        if(mp.find(str1)==mp.end())
            return str1;
        mp.erase(str);
        mp.erase(str1);
        if(mp.size()==0)
        {
            str[k-1]='1';
            return str;
        }
        for(auto &i:mp)
        {
            string j=i.first;
            reverse(j.begin(),j.end());
                if(mp.find(j)==mp.end())
                    return j;
        }
        return str;
        
    }
};
thankyou
