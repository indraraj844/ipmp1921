class Solution {
public:
 int find(vector<int>& par, int i) {
        if (par[i] == i)
            return i;
        return par[i] = find(par, par[i]);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int> par(edges.size() + 1);
        int a = -1, b = -1;
        for (int i = 0; i < par.size(); ++i) par[i] = i;
        for (vector<int>& i: edges) {
            if (find(par, i[0]) != find(par, i[1]))
                par[find(par, i[0])] = find(par, i[1]);
            else {
                a = i[0];
                b = i[1];
            }
        }
        return {a, b};
    }
};
thankyou
