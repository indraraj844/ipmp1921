class Solution {
public:
  int countSub(vector<int>&arr,
                  int n, int k)
{
    int count = 0;
 
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            if (sum + arr[j] < k) {
                sum = arr[j] + sum;
                count++;
            }
            else {
                break;
            }
        }
    }
 
    return count;
}
    int countRangeSum(vector<int>& arr, int L, int R) {
        int n=arr.size();
    int Rcnt = countSub(arr, n, R);
    int Lcnt = countSub(arr, n, L - 1);
 
    return Rcnt - Lcnt;
    }
};
o(n)
    
