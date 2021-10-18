class Solution {
public:
   void solve(vector<int>&mp,int& res)
   {
       for(int i=0;i<26;i++)
       {
           if(mp[i])
           {
            res++;
            mp[i]--;
           solve(mp,res);
          mp[i]++;
           }
          
       }
   }
    int numTilePossibilities(string tiles) {
        
        vector<int>mp(26,0);
        for(auto p:tiles)mp[p-'A']++;
        
        int res=0;
        solve(mp,res);
        return res;
    }
};
