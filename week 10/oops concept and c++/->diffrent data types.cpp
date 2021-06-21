class Solution {
  public:
    int BasicDataType(string s) {
        // code here
       int n=s.length();
       if(n==1)
       {
           if(s[0]>=48 &&s[0]<=57)
           return sizeof(int);
           else
            return sizeof(char);
       }
       else
       {
           int i,flag=0;
           for(i=0;i<n;i++)
           {
             if(s[i]=='.')
             {
                 flag=1;
                 break;
             }
           }
           if(flag==0)return sizeof(int);
          else{
              int count=0;
             for(int j=i+1;j<n;j++)
             {
                 count++;
             }
             if(count>5)return sizeof(double);
             else
             return sizeof(float);
          }
           
       }
    }
