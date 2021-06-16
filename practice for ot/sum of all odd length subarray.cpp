class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
       int len=arr.size();
        int res=0;
        for(int i=0;i<len;i++)
        {
            int start=len-i;
            int end=i+1;
            
            int total=start*end;
            int odd=total%2+total/2;
            res+=odd*arr[i];
        }
        return res;
        
    }
};
thankyou
