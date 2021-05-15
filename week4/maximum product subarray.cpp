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
class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n=arr.size();
        int max_end=1,min_end=1;
        int max_prod=0;
        int flag=0;
        if(n==1)
        {
            return arr[0];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
            max_end*=arr[i];
            min_end=min(1,min_end);
                flag=1;
            }
            else if(arr[i]==0)
            {
                max_end=1;
                min_end=1;
            }
            else
            {
                int temp=max_end;
                max_end=max(1,min_end*arr[i]);
                min_end=temp*arr[i];
            }
            max_prod=max(max_prod,max_end);
        }
            return max_prod;
        
    }
};
need to change
