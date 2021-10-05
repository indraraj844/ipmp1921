method 1 : dice throw similar method
metho 2
class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size();
        int sum=0;
        for(auto p:rolls)sum+=p;
        
        int x=(mean*(m+n))-sum;
        if(x>6*n)return {};
        else if(x<1*n)return {};
        
        int distribution=x/n,remaining=x%n;
        vector<int>ans(n,distribution);
        for(int i=0;i<remaining;i++)
        {
            ans[i]++;
        }
        return ans;
    }
};
o(n)
 s(1)
