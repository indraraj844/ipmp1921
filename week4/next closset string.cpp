method 1 naive approach
class Solution {
public:
    bool isPallindrome(int n)
    {
        string st=to_string(n);
        int len=st.length();
        if(len==1)return true;
        int mid=len/2;
        int i=mid-1;
        int j=(len%2)?mid+1:mid;
        
        while(i>-1)
        {
            if(st[i]!=st[j])
                return false;
            else
                {
                    i--;j++;
                }
        }
        return true;
        
    }
    string nearestPalindromic(string str) {
       int len=str.length();
        int n=stoi(str);
       int low=n-1,high=n+1;
        
         if(len==1)
         {
             str=to_string(low);
             return str;
        }
        while(!isPallindrome(low))low--;
        while(!isPallindrome(high))high++;
        
        if(high-n>=n-low)
            return to_string(low);
        return to_string(high);
        
        
    }
};
[not valid for big cases]
metnod 2:
mirror of left or right
class Solution {
public:
    bool all9(string str)
    {
        for(int i=0;i<str.length();i++)
        {
            if(str[i]!='9')
                return false;
        }
        return true;
    }
    string nearestPalindromic(string str) {
       int len=str.length();
        int n=stoi(str);
       int low=n-1;
        
         if(len==1|| str=="10")
         {
             str=to_string(low);
             return str;
        }
       if(all9(str))
       {
           int n=stoi(str);
           return to_string(n+2);
       }
        int mid=len/2;
        int i=mid-1;
        int j=(len%2)?mid+1:mid;
        int flag=0;
        
        while(i>-1 &&str[i]==str[j])
        {
            i--;j++;
        }
        
        if(i==-1)flag=1;
            
         string str1=str;
        string str2=str;
        if(flag)
        {
            int i=mid-1;
            int carry=1;
            if(n%2)
            {
             str1[mid]+=carry;
            carry =str1[mid]/10;
            str1[mid]=str1[mid]%10;
            j=mid+1;   
            }
            else j=mid;
            while(i>-1)
            {
                 str1[i]+=carry;
            carry =str1[i]/10;
            str1[i]=str1[i]%10;
                str1[j++]=str[i--];
            } 
        
            if(str[mid]=='0')
                str2=to_string(n-2);
            else
            {if(len%2)str2[mid]-=1;
             else{
                 str2[mid]-=1;
                 str2[mid-1]-=1;
             }
            }
            
        }
        else
        {        i=mid-1,j=(len%2)?mid+1:mid;
        while(i>-1)
        {
            str2[i--]=str2[j++];
        }
        i=mid-1,j=(len%2)?mid+1:mid;
        while(i>-1)
        {
            str1[j++]=str1[i--];
        }
        }
        int low1=stoi(str1);
        int high=stoi(str2);
        if(abs(high-n)>=abs(n-low1))
            return str1;
        return str2;
        
        
    }
};
need to change for a pallindromic string;
