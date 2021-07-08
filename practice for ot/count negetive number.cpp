class Solution {
public:
    int helper(vector<vector<int>>& grid,int i,int j,int n,int m)
    {
        if(i>n || j>m||i<0 ||j<0)return 0;
        int mid1=(i+n)/2,mid2=(j+m)/2;
        
        if(grid[mid1][mid2]<0)
        return (n-mid1)*(m-mid2)+helper(grid,0,0,mid1-1,m)+helper(grid,mid1,0,n,mid2-1);
            
        else
    return helper(grid,mid1+1,0,n,m)+helper(grid,0,mid2+1,mid1,m);
            
    }
    int countNegatives(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
       
        return helper(grid,0,0,row-1,col-1);
    }
};
need to change

method 2
class Solution {
public:
    
    int countNegatives(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int count=0;
      
        int i=0,j=col-1;
        while(i<row && j>-1)
        {
            if(grid[i][j]<0)
            {
               count+=row-i;
                j--;
            }
            else 
                i++;      
        }
        return count;
    }
};
