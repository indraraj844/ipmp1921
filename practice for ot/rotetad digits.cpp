class Solution {
public:
    int rotatedDigits(int n) {
    int res=0;
    for(int i=1;i<=n;i++)
    {
        bool flag=0;
        int temp=i;
        while(temp)
        {
            int d=temp%10;
          if(d==3 ||d==4||d==7)
          {
              flag=0;
              break;
          }
      if(d==2 ||d==5||d==6||d==9)
          {
          flag=1;
          }
            temp=temp/10;
        }
        if(flag)res++;
    }
        return res;
    }
};
