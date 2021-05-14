method 1:
brute force
method 2:
binary search
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int max_count=0;
	    int count;
	    for(int i=0;i<n;i++)
	    {
	        count=0;
	       int l=0,h=m-1;
	       while(l<=h)
	       {
	           int mid=l+ ((h-l)/2);
	           if(arr[i][mid])
	           {
	               count+=h-mid+1;
	               h=mid-1;
	           }
	           else 
	            l=mid+1;
	       }
	        max_count=max(max_count,count);
	    }
	    return max_count;
	}

};
method 3:
time complexity o(m+n)
  
