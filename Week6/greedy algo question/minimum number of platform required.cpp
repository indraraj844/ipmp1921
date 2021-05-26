method 1
  two loop o(n^2)
  int findPlatform(int arr[], int dep[], int n)
    {
     int plat_needed = 1, result = 1;
    int i = 1, j = 0;
 
    // run a nested  loop to find overlap
    for (int i = 0; i < n; i++) {
        // minimum platform
        plat_needed = 1;
 
        for (int j = i + 1; j < n; j++) {
            // check for overlap
            if ((arr[i] >= arr[j] && arr[i] <= dep[j]) ||
           (arr[j] >= arr[i] && arr[j] <= dep[i]))
                plat_needed++;
        }
        result = max(result, plat_needed);
    }
  need to change
    method 2
    o(nlog(n))
    int findPlatform(int arr[], int dep[], int n)
    {
     int plat_needed = 1, res = 1;
     sort(arr,arr+n);
     sort(dep,dep+n);
     
     int i=1,j=0;
     while(i<n&&j<n)
     {
         if(arr[i]<=dep[j])
         {
             plat_needed++;
             i++;
         }
         else
         {
             plat_needed--;
             j++;
         }
         res=max(res,plat_needed);
     }
     return res;
    }
  no need to change
    method 3 
    o(n)
    int findPlatform(int arr[], int dep[], int n)
    {
     int res = 1;
     int a[2361]={0};
     for(int i=0;i<n;i++)
     {
         ++a[arr[i]];
         --a[dep[i]+1];
     }
     for(int i=1;i<2361;i++)
     {
         a[i]=a[i]+a[i-1];
         res=max(a[i],res);
     }
     return res;
    }
  need to change
    thnakyou
    
