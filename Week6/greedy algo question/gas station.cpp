method 1 brute force
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int tank;
        int i;
        for(i=0;i<n;i++)
        {
            tank=gas[i]-cost[i];
            if(tank<0)continue;
            else
            {
            int j=(i+1)%n;
                while(j!=i)
                {
                    tank+=gas[j]-cost[j];
                    if(tank<0)break;
                    else
                        
                    {
                        j=(j+1)%n;  
                    }
                }
                if(j==i)
                    return i;
            }
        }
        return -1;
    }
};
o(n^2)
  check for every station
  run for every case
  
  method 2 greedy algo
  class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int tank=0,total=0;
        int start=0;
        for(int i=0;i<n;i++)
        {
            tank+=gas[i]-cost[i];
            if(tank<0)
            {
                start=i+1;
                total+=tank;
                tank=0;
            }
        } 
        if(tank+total<0)return -1;
        return start;
    }
};
o(n)
  approach: we will traverse all loop 
  so
  1.total cost should be greater than or equal total cost;
  2.if at any place tank is negetive than we have to left that path and have to start from next point
  3. we have to check one time each element of array then we store answer in start variable or return -1
    
    thankyou
  
