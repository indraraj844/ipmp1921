method 1 
  using recursion 
  class Solution {
public:
    int fib(int n) {
        if(n==0)return 0;
        else if(n==1)return 1;
        else
            return fib(n-1)+fib(n-2);
    }
};
time complexity o(n)
  method 2
  using dynamic programing
  class Solution {
public:
    int fib(int n) {
        int f[n+1];
        if(n==0)return 0;
        else if(n==1)return 1;
        f[0]=0;
        f[1]=1;
        for(int i=2;i<n+1;i++)
        {
            f[i]=f[i-1]+f[i-2];
        }
        return f[n];
        
    }
};
time complexity o(n)
  
  method 3
  memory efficent appoach
  class Solution {
public:
    int fib(int n) {
        if(n==0)return 0;
        else if(n==1)return 1;
        int a=0;
        int b=1;
        int c;
        for(int i=2;i<n+1;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return b;
        
    }
};
o(n)
  method 4
  usign matrix {{1,1},{1,0}}
{{fn+1,fn},{fn,fn-1}};

method 5 
  efficent version of method 4
  time complexity log(n)
 
  method 6 using formulae
  class Solution {
public:
    int fib(int n) {
        if(n==0)return 0;
        else if(n==1)return 1;
         double  x=(sqrt(5)+1)/2;
          double y=pow(x,n);
        return round(y/(sqrt(5)));
        
    }
};
time complexity o(1);
thankyou
