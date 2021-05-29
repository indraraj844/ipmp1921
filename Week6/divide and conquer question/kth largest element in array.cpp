method 1
  using sorting
  class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
       sort(nums.begin(),nums.end());
        return nums[n-k];
    }
};
o(nlogn)
  method 2
  usign max heap
  class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
         priority_queue<int,vector<int>,greater<int>>heap;
        for(int i=0;i<n;i++)
        {
            heap.push(nums[i]);
            if(heap.size()>k)
                heap.pop();
        }
        return heap.top();
    }
};
O(n + kLogn)
method 3
  modified version of quick sort
  avarage case o(n)
    wrost case o(n^2)
  class Solution {
public:
    int partition(vector<int>& arr,int l,int r)
    {
        int x=arr[r],i=l;
        for(int j=l;j<=r-1;j++)
        {
            if(x>=arr[j])
            {
                swap(arr[i],arr[j]);
                i++; 
            }
               
        }
        swap(arr[i],arr[r]);
        return i;
    }
    int helper(vector<int>& arr,int l,int r,int k)
    {
        cout<<k<<" ";
        if(k>0&&k<=r-l+1)
        {
            int pos=partition(arr,l,r);
            if(pos-1==k-1)return arr[pos];
            else if(pos-1>k-1)
                return helper(arr,l,pos-1,k);
                else 
                return helper(arr,pos+1,r,k-pos); 
        }
        return INT_MAX;
    }
    
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
         return helper(nums,0,n-1,n-k+1);
    }
};
need to change
