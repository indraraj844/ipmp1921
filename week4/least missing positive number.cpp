method 1:
using a map
class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        unordered_map<int,int>mp;
        int n=arr.size();
        
        for(int i=0;i<n;i++)
        {
        mp[arr[i]]++;}
        for(int i=1;i<n+1;i++)
        {
            if(mp[i]==0)
                return i;
        }
        return n+1;
    }
};
method 2:
need to modify
class Solution {
public:
    int segrate(vector<int> &arr,int n)
    {   int j=0;
        for(int i=0;i<n;i++)
        { if(arr[i]<0)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
        }
     return j;
    }
    int find_mising(vector<int>&arr,int n,int shift)
    {
        for(int i=shift;i<n;i++)
        { if(arr[abs(arr[i])-1]>0 &&abs(arr[i])-1<n)
            arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
                return i+1;
        }
        return n;
    }
    int firstMissingPositive(vector<int>& arr) {
        int n=arr.size();
        int shift=segrate(arr,n);
        return find_mising(arr,n,shift);
    }
};
