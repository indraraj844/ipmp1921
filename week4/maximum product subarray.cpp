method 1 brute force:
class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n=arr.size();
        int prod=1;
        int max_prod=INT_MIN;
        for(int i=0;i<n;i++)
        {
            prod=1;
            for(int j=i;j<n;j++)
            {
                prod*=arr[j];
                max_prod=max(max_prod,prod);
                
            }
        }
        return max_prod;
        
    }
};
method 2:
