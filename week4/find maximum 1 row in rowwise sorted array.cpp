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
	    int max_index=-1;
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
	       if(count>max_count &&count>0)
	       {
	           max_count=count;
	           max_index=i;
	       }
	    }
	    return max_index;
	}

};
method 3:
time complexity o(m+n)
	
  
