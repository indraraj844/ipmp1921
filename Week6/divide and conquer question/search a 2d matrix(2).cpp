method 1 brute force 
take all element in an array and use merge sort

method 2 binary search algo
 O(log n + log m). O(Log n) time is required to find the two desired rows.
  Then O(Log m) time is required for binary search in one of the four parts with size equal to m/2.
  
method 3 devide and conquer
o(n^1.58)
  class Solution {
public:
    bool helper(vector<vector<int>>& arr,int row,int n,int col,int m,int tar)
    {
        if(row<=n &&col<=m)
        {
             int i=(row+n)/2;
        int j=(col+m)/2;
        if(arr[i][j]==tar)return true;
        else if(arr[i][j]>tar)
            return helper(arr,row,n,col,j-1,tar)||
               helper(arr,row,i-1,j,m,tar);
            else
            return helper(arr,i+1,n,col,m,tar)||
               helper(arr,row,i,j+1,m,tar); 
                
        }
       return false;
    }
    bool searchMatrix(vector<vector<int>>& arr, int tar) {
    int n=arr.size();
    int m=arr[0].size();
     return helper(arr,0,n-1,0,m-1,tar);    
    }
};
