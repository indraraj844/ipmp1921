class Solution {
public:
    int wiggleMaxLength(vector<int>& arr) {
        int n=arr.size();
        if(n==2)return 2;
        int count=2;
        vector<int>v;
        for(int i=0;i<n-1;i++)
        {
          v[i]=arr[i+1]-arr[i];
        }
        int res=v[0];
        for(int i=1;i<n-1;i++)
        {
            if((res*v[i])<0)
            {res=v[i];
             count++;
            }
       }
        return count;
    }
};
