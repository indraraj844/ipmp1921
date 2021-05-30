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
   int partition(vector<int>& a,int l,int h)
{
    int i=l-1;
    int p=a[h];
    for(int j=l;j<h;j++)
    {
        if(a[j]<p)
        {
            i=i+1;
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    
    int temp1=a[i+1];
    a[i+1]=a[h];
    a[h]=temp1;
    
    return i+1;
}

int quicksort(vector<int>& a,int l,int h,int k)
{
    if(l>h)
        return 0;
    
    int pi=partition(a,l,h);
    if(pi==k)
        return a[pi];
    
 return quicksort(a,l,pi-1,k) + quicksort(a,pi+1,h,k);
}
    
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
         return  quicksort(nums,0,n-1,n-k);
    }
};
thankyou

