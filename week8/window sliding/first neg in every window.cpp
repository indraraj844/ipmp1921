method 1 
  brute force
  vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k) {
    vector<long long>v;
    int j;
    for(long long i=0;i<=n-k;i++)
    {
        for(j=0;j<k;j++)
        {
            if(arr[i+j]<0)break;
        }
        if(j==k)
         v.push_back(0);
         else
           v.push_back(arr[i+j]);
    }
    return v;
 }
o(n*k)
  
  method 2 sliding window
  vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int n, long long int k) {
    vector<long long>v;
    list<long long>l;
     
     for(int i=0;i<k;i++)
     {if(a[i]<0)
     l.push_back(a[i]);
     }
     for(int i=k;i<n+1;i++)
     {
        if(l.size()==0)
        v.push_back(0);
        else
        v.push_back(l.front());
        
        if(a[i]<0)
        l.push_back(a[i]);
        
        if(a[i-k]==l.front())
        l.pop_front();
        
     }
    return v;
 }
o(n)
  thankyou
