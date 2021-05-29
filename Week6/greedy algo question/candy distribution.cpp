method 1 brute force
class Solution {
public:
    int candy(vector<int>& rate) {
        int n=rate.size();
        vector<int>lr;
        lr.assign(n,1);
       bool flag=true;
        while(flag)
        {
            flag=false;
            for(int i=0;i<n;i++)
            {
               if(i!=n-1 && rate[i]>rate[i+1]&& lr[i]<=lr[i+1])
            {
                  lr[i]=max(lr[i],lr[i+1]+1);
                flag=true;
            }
              
            else if(i!=0 && rate[i]>rate[i-1]&&lr[i]<=lr[i-1])
            {
                lr[i]=max(lr[i],lr[i-1]+1);
                flag=true;
            } 
            }
            
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=lr[i];
        }
        return sum;
    }
};
not valid for all cases
method 2
  using to array left to right and right to left
   class Solution {
public:
    int candy(vector<int>& rate) {
        int n=rate.size();
        vector<int>lr;
        vector<int>rl;
        lr.assign(n,1);
        rl.assign(n,1);
        for(int i=1;i<n;i++)
        {
            if(rate[i]>rate[i-1])
                lr[i]=lr[i-1]+1;
        }
        for(int i=n-2;i>-1;i--)
        {
            if(rate[i]>rate[i+1])
                rl[i]=rl[i+1]+1;
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=max(lr[i],rl[i]);
        }
        return sum;
    }
};
o(n)
 s(n);
we can implement it using one array
class Solution {
public:
    int candy(vector<int>& rate) {
        int n=rate.size();
        vector<int>lr;
        lr.assign(n,1);
        for(int i=1;i<n;i++)
        {
            if(rate[i]>rate[i-1])
                lr[i]=lr[i-1]+1;
        }
        for(int i=n-2;i>-1;i--)
        {
            if(rate[i]>rate[i+1])
                lr[i]=max(lr[i],lr[i+1]+1);
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=lr[i];
        }
        return sum;
    }
};
method 3
  we can do it in constant space
  try by yourself 
  answer candy problem solution leetcode
  
