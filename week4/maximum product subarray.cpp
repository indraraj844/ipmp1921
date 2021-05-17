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
        int max_fwd=INT_MIN,max_bwd=INT_MIN;
        int max_till_now=1;
        int flag=0;
        for(int i=0;i<n;i++)
        {
         max_till_now*=arr[i];
            if(max_till_now==0)
            {
                flag=1;
                max_till_now=1;
                continue;
            }
            max_fwd=max(max_fwd,max_till_now);
        }
        max_till_now=1;
         for(int i=n-1;i>-1;i--)
        {
         max_till_now*=arr[i];
            if(max_till_now==0)
            {
                flag=1;
                max_till_now=1;
                continue;
            }
            max_bwd=max(max_bwd,max_till_now);
        }
        int res=max(max_fwd,max_bwd);
        if(flag)
            return max(res,0);
        return res;
        
    }
};
                max_end=max(1,min_end*arr[i]);
                min_end=temp*arr[i];
            }
            max_prod=max(max_prod,max_end);
        }
            return max_prod;
        
    }
};
o(n) s(1);
method 3:
class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n=arr.size();
        int min_val=arr[0],max_val=arr[0];
        int max_prod=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]<0)swap(max_val,min_val);
             max_val=max(arr[i],max_val*arr[i]);
             min_val=min(arr[i],min_val*arr[i]);
            
            max_prod=max(max_prod,max_val);
        }
        return max_prod;
       
        
    }
};
o(n) s(1)
