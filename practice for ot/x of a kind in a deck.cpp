class Solution {
public:
   bool hasGroupsSizeX(vector<int>& deck) {
        int n = deck.size();
        
        if(n==1)
            return false;
        unordered_map<int,int>  mp ;
        for(auto it:deck )
        {
            mp[it]++;
        }
        int g = -1 ;
        
        for(auto it : mp)
        {
            if(it.second > 0)
            {
                if(g==-1)
                    g=it.second;
                else
                    g = gcd(g,it.second);
            }
        }
        
        
        
        return g>=2;
        
    }
};thankyou
