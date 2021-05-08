BRUTE FORCE:
class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n=arr.size();
        vector<int>square;
        for(int i=0;i<n;i++)
        {
            square.push_back(arr[i]*arr[i]);
        }
        sort(square.begin(),square.end());
        return square;
        
        
    }
};
METHOD 2:
