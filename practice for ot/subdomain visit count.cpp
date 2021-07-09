class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string,int>mp;
            for(auto it:cpdomains)
            {
                int i=0,x=0;
                while(i<it.size()&& it[i]!=' ')
                {
                    x=(x*10)+(it[i]-'0');
                    i++;
                }
            i++;
                while(i<it.size())
                {
                    mp[it.substr(i)]+=x;
                    while(i<it.size()&& it[i]!='.')
                        i++;

                    i++;
                }
             }
        
      vector<string>v;
        for(auto it:mp){
           v.push_back(to_string(it.second)+" "+it.first);
           }
      return v;
    }
};
