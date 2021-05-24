method 1 naive approach 
O(n^2)
  method 3 kadane sum
  o(n)
  method 2 divide and conquer algo 
  o(nlogn)
  code
  class Solution {
public:
    int crossLimit(vector<int>& arr,int l,int m,int h)
    {
        int sum=0,left_sum=INT_MIN,right_sum=INT_MIN;
        for(int i=m;i>=l;i--)
        {
            sum+=arr[i];
            left_sum=max(left_sum,sum);
       }
        sum=0;
        for(int i=m+1;i<=h;i++)
        {
            sum+=arr[i];
            right_sum=max(right_sum,sum);
       }
        return max(max(left_sum,right_sum),left_sum+right_sum) ;
        
    }
    int maxSum(vector<int>& arr,int l,int h)
    {
        if(l==h)return arr[l];
        int m=(l+h)/2;
        return max(max(maxSum(arr,l,m),maxSum(arr,m+1,h))
                     ,crossLimit(arr,l,m,h));
    }
    int maxSubArray(vector<int>& arr) {
        int n=arr.size();
        return maxSum(arr,0,n-1);
    }
};
