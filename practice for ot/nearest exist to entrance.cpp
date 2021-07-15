class Solution {
public:
    int helper(vector<vector<char>>& maze,vector<int>& entrance,int i,int j,int n,int m)
    {
       if((i==0|| j==0|| i==n-1 || j==m-1)&& (i!=entrance[0])&& (j!=entrance[1]))
            return 0;
        else
        {
            int p=INT_MAX,q=INT_MAX,r=INT_MAX,s=INT_MAX;
            if(i<n-1&&maze[i+1][j]!='+')p=helper(maze,entrance,i+1,j,n,m);
             if(i>0&&maze[i-1][j]!='+')q=helper(maze,entrance,i-1,j,n,m);
             if(j<m-1&&maze[i][j+1]!='+')r=helper(maze,entrance,i,j+1,n,m);
             if(j>0&&maze[i][j-1]!='+')s=helper(maze,entrance,i,j-1,n,m);
            return 1+min(min(p,q),min(r,s));
        }
            
        
    }
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        if(maze[entrance[0]][entrance[1]]=='+')
            return false;
        else
        {
            int n=maze.size();
            int m=maze[0].size();
            return helper(maze,entrance,entrance[0],entrance[1],n,m); 
        }
    }
};

  need to change
  
