class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        
        vector<int>v(n,0);
        int s=edges.size();
        for(int i=0;i<s;i++)
        {
            v[edges[i][1]]++;
        }
        vector<int>out;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)out.push_back(i);
        }
            return out;
    }
    
};
