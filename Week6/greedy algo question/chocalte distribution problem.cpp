long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long min_diff=INT_MAX;
    long long diff;
     sort(a.begin(),a.end());
     for(int i=0;i<n-m+1;i++)
     {
         min_diff=min(min_diff,a[i+m-1]-a[i]);
     }
    return min_diff;
    }   
