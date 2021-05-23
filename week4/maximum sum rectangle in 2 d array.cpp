class Solution {
  public:
  int count_sum(int temp[],int row)
  {
      int sum=0,max_sum=INT_MIN;
      for(int i=0;i<row;i++)
      {
         sum+=temp[i];
         if(sum<0)sum=0;
         if(max_sum<sum)max_sum=sum;
      }
      
    return max_sum;
  }
    int maximumSumRectangle(int row, int col, vector<vector<int>> arr) {
        // code here
        int max_sum=INT_MIN;
        int temp[row],sum;
        for(int i=0;i<col;i++)
        {
            memset(temp,0,sizeof(temp));
            for(int j=i;j<col;j++)
            {
                for(int k=0;i<row;k++)
                {
                    temp[k]+=arr[k][j];
                   sum=count_sum(temp,row);
                    if(sum>max_sum)
                    {
                        max_sum=sum;
                    }
                }
            }
        }
        return max_sum;
    }
};

need to change
