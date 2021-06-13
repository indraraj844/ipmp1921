method 1 recursive 
 bool isSubsetSum(int n, int arr[], int sum){
        // code here 
      if(sum==0)return true;
      else if(sum!=0 && n==-1)return false;
      else
      {
          if(arr[n-1]>sum)
          return isSubsetSum(n-1,arr,sum);
          
          else
          return isSubsetSum(n-1,arr,sum)||isSubsetSum(n-1,arr,sum-arr[n-1]);
      }
    }
    method 2 dynamic programing
      bool isSubsetSum(int n, int arr[], int sum){
        // code here 
        
   bool dp[sum+1][n+1];
   for(int i=0;i<sum+1;i++)
   {
       for(int j=0;j<n+1;j++)
       {
           if(i==0)dp[i][j]=true;
           else if( i!=0 && j==0)dp[i][j]= false;
            else
         {
          if(arr[j-1]>i)
       dp[i][j]=dp[i][j-1];
          
          else
          dp[i][j]=dp[i][j-1]||dp[i-arr[j-1]][j-1];
          }
       }
   }
      
      return dp[sum][n];
    }
};

thankyou
