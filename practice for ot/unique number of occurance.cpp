class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        int hash[2001]={0};
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
                hash[1000+abs(arr[i])]++;
            else
                 hash[arr[i]]++;
        }
        set<int>s;
        for( int i=0;i<2001;i++)
        {
            if(hash[i]>0)
            {
                if(s.find(hash[i])!=s.end())
                    return false;
                else
                    s.insert(hash[i]);
            }
        }
        return true;
           
    
    }
};
thankyou
