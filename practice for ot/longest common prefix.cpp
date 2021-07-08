class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         string ans;
        ans=strs[0];
        int k;
        int last=ans.length();
        for(int i=1;i<strs.size();i++)
        {
            k=0;
            for(int j=0;j<strs[i].length();j++)
            {
                if(ans[k]==strs[i][j])
                    k++;
                else 
                    break;
            }
            last=min(k,last);
        }
        cout<<last;
      string ans1="";
    for(int i=0;i<last;i++)
        ans1.push_back(ans[i]);
        
        return ans1;
        
    }  
};
