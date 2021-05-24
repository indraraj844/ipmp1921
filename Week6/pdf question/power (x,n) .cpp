method 1 brute force 
class Solution {
public:
    double myPow(double x, int n) {
        double res=1;
        int flag=0;
        if(n<0)
        {
        flag=1;
            n=-n;
        }
        for(int i=1;i<n+1;i++)
        {if(flag)
        {res= (res/x);
         }
         else 
             res*=x;
             
        }
        return res;
        
    }
};
time complexity o(n)
  integer overflow problem
  
  method 2
  class Solution {
public:
    double myPow(double x, int n) {
         
        if(n==0)return 1;
        else if(x==0)return 0;
        
        double temp=myPow(x,n/2);
        
        if(n%2==0)return temp* temp;
        else
        {
            if(n>0)
                return x*temp*temp;
            else 
                return (temp*temp)/x;
        }   
    }
};
time complexity o(log(n))
  
