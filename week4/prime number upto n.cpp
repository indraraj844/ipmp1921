method 1 naive approach
two loop o(n^2)
  
  method 2 efficent
  class Solution {
public:
    bool isPrime(int n)
    {
        if(n==2 ||n==3)return true;
        else if(!(n%2) ||!(n%3))return false;
        for(int i=5;i*i<=n;i+=6)
        {
            if(!(n%i)||!(n%(i+2)))return false;
        }
    return true;
    }
    int countPrimes(int n) {
        int count=0;
        for(int i=2;i<n;i++)
        {
            if(isPrime(i))
                count++;
        }
        return count;
    }
};
time complexity o(n^3/2)
method 3 sieve of eratostheers
class Solution {
public:
    int countPrimes(int n) {
          bool prime[n + 1];
        memset(prime, true, sizeof(prime));
        int count=0;
        for(int p=2;p*p<=n;p++)
        {
            if(prime[p])
            {
                for(int i=p*p;i<n;i+=p)
                    prime[i]=false;
            }
        }
        for(int i=2;i<n;i++)
        {
            if(prime[i])count++;
       }
        return count;
    }
};
time complexity o(nlog(log(n)));
thankyou
