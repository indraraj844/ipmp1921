method 1 using two array
method 2
  class Solution{
public:	
	// Function to find length of longest bitonic
	// subarray
	int bitonic(vector<int> arr, int n) {
	    // code here
	   if(n==0)return 0;
	   
	   int maxlen=1;
	   int start=0,nextStart=0;
	   int j=0;
	   while(j<n-1)
	   {
	       while(j<n-1 && arr[j]<=arr[j+1])j++;
	       
	       while(j<n-1 && arr[j]>=arr[j+1])
	       {
	           if(j<n-1 && arr[j]>arr[j+1])
	             nextStart=j+1;
	             
	           j++;
	       }
	       maxlen=max(maxlen,j-start+1);
	       start=nextStart;
	   }
	    return maxlen;
	}
};
