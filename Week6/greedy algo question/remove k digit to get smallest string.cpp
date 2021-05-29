class Solution {
public:
    string removeKdigits(string num, int k) {
       int n=num.size();
        if(k==num.size())return "0";
        int count=0;
        int i=0;
        while(i<num.size()-1 && count<k)
        {
            if(num[i]>num[i+1])
            {
                count++;
                num.erase(num.begin()+i);
                if(i!=0)
                  i=i-1;
            }
            else
                i++;
        }
        if(count<k)
        {
            num.erase(num.begin()+num.size()-k+count,num.end());
        }
        
        while(num[0]=='0'&&num.size()>1)num.erase(num.begin()+0);
        return num;
    }
};
o(n)
  thankyou
 moral: sometimes all question understanding we can understand by only test case
   so always ask other case to interviewer 
   
