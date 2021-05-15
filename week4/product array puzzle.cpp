class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
      int n=arr.size();
        int mul=1;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(!arr[i])flag++;
            else
            mul*=arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(flag>1)arr[i]=0;
            else if(flag==0)
            {
                arr[i]=exp(log(mul)-log(arr[i]));
            }
            else if(flag==1 && arr[i]!=0) arr[i]=0;
            else
                arr[i]=mul;
            
        }
        return arr;
    }
};
need to make more efficent
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
      int n=arr.size();
        int mul=1;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(!arr[i])flag++;
            else
            mul*=arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(flag>1)arr[i]=0;
            else if(flag==0)
            {
                arr[i]=mul* pow(arr[i],-1);
            }
            else if(flag==1 && arr[i]!=0) arr[i]=0;
            else
                arr[i]=mul;
            
        }
        return arr;
    }
};
