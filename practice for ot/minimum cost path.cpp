method 1 recursion
class Solution{
public:
    int helper(vector<vector<int>>mat,int n,int i,int j)
    {
        if(i>n||j>n||j<0)return INT_MIN;
        else if(i==n)return mat[i][j];
        return mat[i][j]+max(helper(mat,n,i+1,j+1),max(helper(mat,n,i+1,j-1)
        ,helper(mat,n,i+1,j)));
       
    }
    int maximumPath(int n, vector<vector<int>> matrix)
    {
         int m=matrix[0][0];
         int l1=0,l2=0;
        for(int i=1;i<n;i++)
         {
             if(matrix[0][i]>m)
             {
                 m=matrix[0][i];
                 l2=i;
             }
         }
         
       return helper(matrix,n-1,l1,l2);
    }
};

method 2 dp

class Solution{
public:
    int helper(vector<vector<int>>mat,int n)
    {
        for(int i=1;i<n;i++)
        {
         for(int j=n-1;j>-1;j--)
         {
            if(j==0)
            mat[i][j]+=max(mat[i-1][j],mat[i-1][j+1]);
            else if(j==n-1)
              mat[i][j]+=max(mat[i-1][j],mat[i-1][j-1]);
            else
        mat[i][j]+=max(mat[i-1][j-1],max(mat[i-1][j],mat[i-1][j+1]));
         }
        }
      int m=INT_MIN;
       for(int i=0;i<n;i++)
        {
         for(int j=0;j<n;j++)
         {
          m=max(m,mat[i][j]);
         }
        }
        return m;
       
    }
    int maximumPath(int n, vector<vector<int>> matrix)
    {
       return helper(matrix,n);
    }
};
thankyou
