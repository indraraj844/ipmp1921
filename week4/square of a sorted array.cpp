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
class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n=arr.size();
     int i=0,j=n-1;
        int res[n];
        for(int index=n-1;index>-1;index--)
        {
            if(abs(arr[i])>abs(arr[j]))
            {
                res[index]=arr[i]*arr[i];
                i++;
            }
            else
            {
              res[index]=arr[j]*arr[j];
               j--;
            }    
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=res[i];
        }
        return arr;
    }
};
time complexity o(n)
space complexity s(n)
    
 Method 3:
using merge sort
class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n=arr.size();
        int sep_index;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=0)
            {
                sep_index=i;
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            sep_index=n;
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=(arr[i]*arr[i]);
        }
       
        int i=sep_index-1,j=sep_index,k=0;
        int res[n];
        while(i>-1&&j<n)
        {
            if(arr[i]>arr[j])
            {res[k]=arr[j];
             j++;
            }
            else
            {res[k]=arr[i];
             i--;
            }
            k++;
        }
        while(i>-1)
            {res[k]=arr[i];
             i--;
             k++;
            }
        while(j<n)
        {
            {res[k]=arr[j];
             j++;
             k++;
            }
        }
        
        for(int p=0;p<n;p++)
        {
        arr[p]=res[p];}
        return arr;
    }
};
