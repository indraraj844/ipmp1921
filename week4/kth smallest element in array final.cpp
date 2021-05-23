method 1 search by a binary search technique
class Solution {
public:
    int count(vector<vector<int>>& arr,int row,int col,int mid)
    {int i=row-1,j=0;
     int c=0;
     while(i>-1 && j<col)
     {if(mid<arr[i][j])i--;
      else
      {
          c+=i+1;
          j++;
      }
     }
     return c;
    }
    int kthSmallest(vector<vector<int>>& arr, int k) {
        int row=arr.size();
        int col=arr[0].size();
        int low=arr[0][0],high=arr[row-1][col-1];
        int ans=-1;
        while(low<=high)
        {int mid=low+(high-low)/2;
         int c=count(arr,row,col,mid);
         if(c<k)
         {
             low=mid+1;
         }
         else 
         {
             ans=mid;
             high=mid-1;
         }   
        }
        return ans;
    }
};
 time complexity o(2nlog(maxval))

method 2 using max heap
class Solution {
public:
    int kthSmallest(vector<vector<int>>& arr, int k) {
        int row=arr.size();
        int col=arr[0].size();
       
        priority_queue <int> pq;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                pq.push(arr[i][j]);
                if(pq.size()>k)
                    pq.pop();
            }
        }
        return pq.top();
       
    }
};
time complexity heap opration nlog(n)=klog(k)
  o(maxval*klog(k))
  
