class Solution {
public:
    string multiply(string s1, string s2) {
        if(s1=="0" || s2=="0") //if any of the two strings is zero then multiplication will be zero
            return "0";
        int n=s1.length();
        int m=s2.length();
          vector<int> ans(m+n, 0);
        
        for(int j=m-1;j>=0;j--)
        {
            for(int i=n-1;i>=0;i--)
            {
               
                 ans[i+j+1]+=(s2[j]-'0')*(s1[i]-'0');// doing s2[j]-'0' to convert char to int
                
            //Adding the previous number present at ans[i+j+1] with multiplication of two string 
             //if carry is generated it will be resolved in the below k loop
            
            }
            
            //now ans[i] can max contain double digit number(as 9*9 is 81) so now we are taking the carry out and adding it to ans[i-1]
            // eg-[81,81,81]----->[8,9,9,1]
            for(int k=ans.size()-1;k>0;k--)
            {
                int num=ans[k];
                
                ans[k]=num%10; // i and j are starting from end so numbers in ans will be alloted from last 
                                //digit will be on right( one position ahead) and carry will be on left(one position less)                                                         // so that carry is added in further calculation
                
                ans[k-1]+=num/10;   //carry at given position
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
