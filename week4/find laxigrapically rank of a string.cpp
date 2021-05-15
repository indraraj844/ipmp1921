method 1 simple one 
method 2:
class Solution{
public:
    int fact(int n)
    {
        int res=1;
        for(int i=1;i<n+1;i++)
         res*=i;
         
         return res;
    }
    void create(int count[],string str)
    {
        for(int i=0;i<str.length();i++)
        {
            count[str[i]]++;
        }
        
    }
    void increase(int count[])
    {
         for(int i=1;i<256;i++)
        {
            count[i]+=count[i-1];
        }
    }
    void update(int count[],char ch)
    {
        for(int i=ch;i<256;i++)
        {
            count[i]--;
        }
    }
    int rank(string str){
        // code here
        int l=str.length();
        int mul=fact(l);
        int rank=1;
        int count[256]={0};
        int flag=0;
        create(count,str);
         for(int i=0;i<256;i++)
        {
            if(count[i]>1)
            flag=1;
        }
         if(flag==1)
         return 0;
        increase(count);
       
        for(int i=0;i<l;i++)
        {
            mul/=l-i;
            rank+=(count[str[i]-1]*mul);
            update(count,str[i]);
        }
        return rank%1000003;
    }
};
