class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string>s1;
        set<string>s2;
         int l=emails.size();
        
        for(int k=0;k<l;k++)
        {int count=0;
        int n=emails[k].size();
        int i;string local="",domain="";
        for( i=0;emails[k][i]!='@';i++)
        {
            if(emails[k][i]=='.'&&count==0){count++;continue;}
            else if(emails[k][i]=='+'){
                break;
            }
            
            else
                local+=emails[k][i];
            
        }
        while(emails[k][i]!='@')i++;
            
            
        for(int j=i+1;j<n;j++)
        {
            domain+=emails[k][j];
        }
          s1.insert(local);
          s2.insert(domain); 
        }
        for(auto p:s1)
        {
            cout<<p<<" ";
        }
        cout<<endl;
         for(auto p:s2)
        {
            cout<<p<<" ";
        }
        return max(s1.size(),s2.size());
      
    }
};
