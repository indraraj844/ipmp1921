class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> arr){
        // code here
        int l=n-2;
        while(arr[l]>arr[l+1])
          l--;
          
          if(l==-1)
          {
             sort(arr.begin(),arr.end());
             return arr;
          }
          int p=n-1;
          while(arr[p]<arr[l])
           p--;
           
           swap(arr[p],arr[l]);
          sort(arr.begin()+l+1,arr.end());
          return arr;
          
    }
