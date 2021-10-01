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
