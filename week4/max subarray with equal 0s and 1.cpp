class Solution {
public:
    int findMaxLength(vector<int>&arr) {
        int n=arr.size();
        int count=0,max_length=0;
        for(int i=0;i<n;i++)
        {
            if(!arr[i])arr[i]=-1;
        }
        
        for(int i=1;i<n;i++)
        {
           arr[i]+=arr[i-1];
        }
        unordered_map<int,int>hash;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                max_length=i+1;
            }
            if(hash.find(arr[i])!=hash.end())
         {
             count=i-hash[arr[i]];
             max_length=max(max_length,count);
        }
         else
         {
             hash[arr[i]]=i;
         }
         
        }
        return max_length;
        
    }
};
