method 1
  class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int>ret;
        ret.push_back(1);
        while(ret.size()<n)
        {
            vector<int>temp;
            for(int i=0;i<ret.size();i++)
            {
                if(ret[i]*2-1<=n)
                    temp.push_back(ret[i]*2-1);
            }
            for(int i=0;i<ret.size();i++)
            {
                if(ret[i]*2<=n)
                    temp.push_back(ret[i]*2);
            }
            ret=temp;
        }
        return ret;
    }
};
o(n^2)
  
  method 2 
  pure devide and conquer
  o(nlogn)
  class Solution {
public:
    void transform(vector<int> &a, int first, int  last)
{if(first<last)
  {int mid=(last+first)/2,
   m=(last-first)/2;
   int t[last-first+1];
  
  for(int i=0;i<=last-first;i++)
     {if(i%2==0){t[i/2]=a[first+i];}
      else{t[m+i/2+1]=a[first+i];}}
  for(int i=0;i<=last-first;i++)
     {a[first+i]=t[i];}

   transform (a,first,mid);
   transform (a,mid+1,last);
 }
}
    vector<int> beautifulArray(int n) {
        vector<int>ret;
        ret.assign(n,0);
        
        for(int i=0;i<n;i++)
        {
        ret[i]=i+1;
        }
        transform(ret,0,n-1);
        return ret;
    }
};
merge sort wali scheme
thankyou
