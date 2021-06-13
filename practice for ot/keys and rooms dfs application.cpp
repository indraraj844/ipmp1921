class Solution {
public:
    void dfs(vector<vector<int>>& rooms,vector<bool>& vis,int src)
    {
        vis[src]=true;
        for(auto p:rooms[src])
        {
            if(!vis[p])
                dfs(rooms, vis,p);
        }
        return;
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>vis(n,false);
        dfs(rooms,vis,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])return false;
        }
        return true;
    }
};
thankyou
