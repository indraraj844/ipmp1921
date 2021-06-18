method 1 standered using two array

int bitonic(vector<int> arr, int n) {
	    int inc[n],dec[n];
	    inc[0]=1;
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]>=arr[i-1])
	         inc[i]=inc[i-1]+1;
	         else
	         inc[i]=1;
	    }
	   dec[n-1]=1;
	    for(int i=n-2;i>-1;i--)
	    {
	        if(arr[i]>=arr[i+1])
	         dec[i]=dec[i+1]+1;
	         else 
	         dec[i]=1;
	    }
	    int m=0;
	    for(int i=0;i<n;i++)
	    {
	        m=max(m,inc[i]+dec[i]-1);
	    }
	    return m;
	}
  
some more optimal using one array 
	int bitonic(vector<int> arr, int n) {
	    int inc[n],dec[n];
	     inc[0]=1;
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]>=arr[i-1])
	         inc[i]=inc[i-1]+1;
	         else
	         inc[i]=1;
	    }
	   int t=1;
	   inc[n-1]+=1;
	    for(int i=n-2;i>-1;i--)
	    {
	        if(arr[i]>=arr[i+1])
	        {
	            inc[i]=inc[i]+t+1;
	            t++;
	        }
	         else
	         {
	              inc[i]+=1;
	              t=1;
	         }
	        
	    }
	    int m=0;
	    for(int i=0;i<n;i++)
	    {
	        m=max(m,inc[i]-1);
	    }
	    return m;
	}
};
  
method 2 dynamic

