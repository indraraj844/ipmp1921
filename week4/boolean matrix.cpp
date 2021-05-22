method 1 using two array
row array and col array
  
  method 2: without any extra space
  class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        
        bool row_flag=false,col_flag=false;
        
        for(int i=0;i<col;i++)
        {if(matrix[0][i]==0)row_flag=true;
        }
        for(int i=0;i<row;i++)
        {if(matrix[i][0]==0)col_flag=true;
        }
        
        for(int i=1;i<row;i++)
        {for(int j=1;j<col;j++)
        {if(matrix[i][j]==0)
        {matrix[i][0]=0;
         matrix[0][j]=0;
        } }
        }
        for(int i=1;i<row;i++)
        {for(int j=1;j<col;j++)
        {if(matrix[i][0]==0||matrix[0][j]==0)
        {matrix[i][j]=0;
        } }
        }
        if(row_flag)
        {
           for(int i=0;i<col;i++)
        {matrix[0][i]=0;
        }
        }
        if(col_flag)
        {for(int i=0;i<row;i++)
        {matrix[i][0]=0;
        }
        }
        
        
    }
};
