method 1 brute force 
method 2:
class Solution {
public:
    int find(vector<int>&arr,int low,int high)
    {
        if(low>high)return arr[0];
        else if(low==high)return arr[low];
        else if(high==low+1)
        {
            if(arr[low]<arr[high])return arr[low];
            return arr[high];
   }
        else
        {
            int mid=low+(high-low)/2;
            if(low<high &&arr[mid+1]<arr[mid])
                return arr[mid+1];
            else if(low<mid &&arr[mid-1]>arr[mid])return arr[mid];
            else if(low<mid && arr[mid]>arr[high])
                return find(arr,mid+1,high);
            return find(arr,low,mid-1); 
        }
    }
    int findMin(vector<int>&arr) {
        int n=arr.size();
        // o(n) now i am moving towards log(n)
        return find(arr,0,n-1);
    }
};
