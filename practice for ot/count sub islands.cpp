class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m=grid2.size(),n=grid2[0].size();
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
			{ 
			if(grid2[i][j]==1 && grid1[i][j]==0) 
                   helper(grid2,i,j,m,n);
		     }
        int ans=0;
          for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
               if(grid2[i][j]==1 )
                {
                    ans++;
                     helper(grid2,i,j,m,n);
                }
       
        return ans;
    }
        void helper(vector<vector<int>>& grid,int i,int j,int&m,int &n)
    {
        if(i<0||j<0||i==m ||j==n|| grid[i][j]==0)
            return;
        else{
            grid[i][j]=0;
             helper(grid,i+1,j,m,n);
             helper(grid,i-1,j,m,n);
             helper(grid,i,j+1,m,n);
             helper(grid,i,j-1,m,n);
        }
    }
};
