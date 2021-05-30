 int minSkips(vector<int>& dist, int speed, int hoursBefore) {
        
        vector<vector<double>> dp(dist.size()+1,vector<double> (dist.size()+1,1e24));
        
        for(int i=0;i<=dist.size();i++) dp[0][i]=0;
        
        for(int i=1;i<=dist.size();i++){
            for(int ans=0;ans<=dist.size();ans++){
                if(ans > i) continue;
                double ok=INT_MAX;
                if(ans)
                     ok=dp[i-1][ans-1]+(double)(1.0*dist[i-1])/(1.0*speed);

               dp[i][ans]=min({ceil(dp[i-1][ans]+(double)(1.0*dist[i-1])/(1.0*speed)),ok});             
            }
        }
        for(int ans=0;ans<=dist.size();ans++){
            if(dp[dist.size()][ans] <=hoursBefore) return ans;
        }
        return -1;
    }
};
