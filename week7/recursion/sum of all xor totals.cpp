method 1 recursion 
class Solution {
public:
    int find(int ind,vector<int>&arr,int sum)
    {
        int x_sum=sum;
        for(int i=ind;i<arr.size();i++)
        {
            x_sum+=find(i+1,arr,sum^arr[i]);
        }
        return x_sum;
    }
    int subsetXORSum(vector<int>& arr) {
       int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=find(i+1,arr,arr[i]);
        }
        return sum;
    }
};
method 2 observation
