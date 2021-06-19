size
int maxSquare(int n, int m, vector<vector<int>> mat){
        // code here
        int v[n][m];
        for(int j=0;j<m;j++)
         v[0][j]=mat[0][j];
         
         for(int j=0;j<n;j++)
         v[j][0]=mat[j][0];
         
         for(int i=1;i<n;i++)
         {
          for(int j=1;j<m;j++)
          {
             if(mat[i][j]==1)
             {
                 v[i][j]=min(v[i-1][j-1],min(v[i-1][j],v[i][j-1]))+1;
             }
             else
               v[i][j]=0;
          }
         }
         
         int p=v[0][0];
           
         for(int i=0;i<n;i++)
         {
          for(int j=0;j<m;j++)
          {
              if(v[i][j]>p)
              p=v[i][j];
          }
         }
         return p;
    }
    
print part
  int p=v[0][0];
         int x=0,y=0;
           
         for(int i=0;i<n;i++)
         {
          for(int j=0;j<m;j++)
          {
              if(v[i][j]>p)
              {
                  p=v[i][j];
                  x=i;
                  y=j;
              }
              
          }
         }
         
         print part
         for(int i=x-p+1;i<=x;i++)
         {
          for(int j=y-p+1;j<=y;j++)
          {
              cout<<mat[i][j]<<" ";
          }
          cout<<endl;
         }
thankyou
