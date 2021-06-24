class Solution {
public:
    int reinitializePermutation(int n) {
       int indexof1=n/2;
        int ans=1;
        while(indexof1!=1)
        {
            ans++;
            indexof1=(indexof1%2)* (n/2)+indexof1/2;
        }
        return ans;
    }
};
