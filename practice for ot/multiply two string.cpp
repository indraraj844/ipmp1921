class Solution {
public:
    string multiply(string s1, string s2) {
        if(s1=="0" || s2=="0") 
            return "0";
        int n=s1.length();
        int m=s2.length();
          vector<int> ans(m+n, 0);
        
        for(int j=m-1;j>=0;j--)
        {
            for(int i=n-1;i>=0;i--)
            {
                 ans[i+j+1]+=(s2[j]-'0')*(s1[i]-'0');
            }
            // eg-[81,81,81]----->[8,9,9,1]
            for(int k=ans.size()-1;k>0;k--)
            {
                int num=ans[k];
                ans[k]=num%10; 
                ans[k-1]+=num/10;
            }
        }
        
       int i=0;
        while(i<ans.size()&&ans[i]==0) //remove the starting zeroes
            i++;
        
        string res;
        while(i<ans.size())  {  //convert vector to string
            res+=(ans[i]+'0');
            i++;
        }
        return res;
    }
};
