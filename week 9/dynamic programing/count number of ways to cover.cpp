method 1 recursion
method 2 dp
method3 dp more efficent
 long long countWays(int n)
    {
        int  ways[3] ;
        ways[0] = 1;
        ways[1] = 1;
        ways[2] = 2;
    
        for(int i=3 ;i<=n ;i++)
            ways[i%3] = ways[(i-1)%3] + ways[(i-2)%3] + ways[(i-3)%3];
         
        return ways[n%3]%1000000007;
}
thankyou
