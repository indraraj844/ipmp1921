class Solution {
public:
    void helper(vector<int>&res,int i,int n)
    {
        if(i<=n)
        res.push_back(i);
        
        for(int j=0;j<10;j++)
        {
            int num=i*10+j;
            if(num<=n)
                helper(res,num,n);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int>res;
        for(int i=1;i<10;i++)
        {
            helper(res,i,n);
        }
        return res;
    }
};
