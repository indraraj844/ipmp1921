usign a set
class Solution{
public:	
	ull getNthUglyNo(int n) {
	   if(n==1||n==2||n==3||n==4||n==5)return n;
	   set<long long int>s;
	   s.insert(1);
	   n--;
	   while(n)
	   {
	      auto it=s.begin();
	         long long int t=*it;
	       s.erase(it);
	       s.insert(t*2);
	        s.insert(t*3);
	        s.insert(t*5);
	        n--;
	   }
	  auto ip=s.begin();
	   return *ip;
	}
};
dynamic programing
ull getNthUglyNo(int n) {
	 long long  dp[n+1];
	 dp[0]=1;
	 long long  c2=0,c3=0,c5=0;
	 for(int i=1;i<n+1;i++)
	 {
	     dp[i]=min(2*dp[c2],min(3*dp[c3],5*dp[c5]));
	 
	 if(dp[i]==2*dp[c2])c2++;
	 if(dp[i]==3*dp[c3])c3++;
	 if(dp[i]==5*dp[c5])c5++;
	 }
	 return dp[n-1];
	}
  thankyou
  
