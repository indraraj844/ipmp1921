method1 brute force algo 
time complexity o(n)
  
  method 2:
class Solution {
public:
    int find(vector<int>&arr,int low,int high)
    { if(low==high)return low;
        else if(high==low+1)
        {
            if(arr[low]>arr[high])return low;
            return high;
         }
        else
        {
            int mid=low+(high-low)/2;
            if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1])
                return mid;
            else if(arr[mid-1]>arr[mid]&&arr[mid+1]<arr[mid])
                return find(arr,low,mid-1);
            return find(arr,mid+1,high); 
        }
   }
    int findPeakElement(vector<int>& arr) {
        int n=arr.size();
        return find(arr,0,n-1);
    }
};
