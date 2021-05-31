method 1 brute force
class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            int count=0;
            for(int j=i+1;j<n;j++)
            {
                if(nums[j]<nums[i])
                    count++;
            }
            nums[i]=count;
        }
        nums[n-1]=0;
        return nums;
    }
};
doesn't work for every case
  
  method 2:
o(nlogn)
  merge sort stargey
class Solution {
public:
    void merge(pair<int, int> a[],vector<int>&ans, int start,
                int mid, int end)
{
    pair<int, int> f[mid - start + 1],
                   s[end - mid];
                    
    int n = mid - start + 1;
    int m = end - mid;
     
    for(int i = start; i <= mid; i++)
        f[i - start] = a[i];
    for(int i = mid + 1; i <= end; i++)
        s[i - mid - 1] = a[i];
         
    int i = 0, j = 0, k = start;
    int cnt = 0;

    while(i < n && j < m)
    {
        if (f[i].second <= s[j].second)
        {
            ans[f[i].first] += cnt;
            a[k++] = f[i++];
        }
        else
        {
            cnt++;
            a[k++] = s[j++];
        }
    }
    while(i < n)
    {
        ans[f[i].first] += cnt;
        a[k++] = f[i++];
    }
    while(j < m)
    {
        a[k++] = s[j++];
    }
}
void mergesort(pair<int, int> item[],vector<int>&ans,
                    int low, int high)
{
    if (low >= high)
        return;
         
    int mid = (low + high) / 2;
    mergesort(item,ans, low, mid);
    mergesort(item,ans, mid + 1, high);
    merge(item, ans,low, mid, high);
}
    vector<int> countSmaller(vector<int>& nums) {     
        int n=nums.size();
    pair<int, int> a[n];
    vector<int>ans;
    ans.assign(n,0);
     
    for(int i = 0; i < n; i++)
    {
        a[i].second = nums[i];
        a[i].first = i;
    }
     
    mergesort(a,ans, 0, n - 1);
    return ans;
    
    }
};
thankyou
