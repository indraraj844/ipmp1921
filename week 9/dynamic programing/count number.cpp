long long fact(int n)
{
    long long res=1;
    for(long long  i=1;i<=n;i++)
    {
        res*=i;
    }
    return res;
}
long long result(int n,int r)
{
    if(n<r)return 0;
    else 
    return fact(n)/(fact(r)*fact(n-r));
}
long long getAnswer(long long a[], long long n, long long k, long long x)
{
    // Your code goes here
    long long count=0;
    sort(a,a+n);
    for(long long i=0;i<n-k+1;i++)
    {
        long long j=n-1;
        while(j>=0)
        {
            if(a[j]-a[i]>x)j--;
            else if(a[j]-a[i]<=x)
            {
                count+=result(j-i,k-1);
                break;
            }
        }
        
    }
    return count%p;
}
need to change
