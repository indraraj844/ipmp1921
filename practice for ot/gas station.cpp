class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_balance=0;
        int balance=0;
        int start=0;
        while(start<gas.size() &&gas[start]<cost[start])
        {
            total_balance+=gas[start]-cost[start];
            start++;
        }
        int b=start;
        while(start<gas.size())
        {
            balance+=gas[start]-cost[start];
            if(balance<0)
            {
                total_balance+=balance;
                 b=start+1;
                  balance=0;
            }
            start++;
        }
        if(balance+total_balance>=0)return b;
        return -1;
        
        
    }
};
o(n)
  
