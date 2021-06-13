recursive
public:
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        if(sum==0 && n==0)return 1;
        else if(sum!=0 && n==0)return 0;
        else
        {
            if(arr[n-1]>sum)
            return perfectSum(arr,n-1,sum);
            else
             return perfectSum(arr,n-1,sum)+perfectSum(arr,n-1,sum-arr[n-1]);;
        }
	}
};

dynamic
  int tab[n + 1][sum + 1];
  // Initializing the first value of matrix
    tab[0][0] = 1;
    for (int i = 1; i <= sum; i++)
        tab[0][i] = 0;
    for (int i = 1; i <= n; i++)
        tab[i][0] = 1;
 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
          // if the value is greater than the sum
            if (a[i - 1] > j)
                tab[i][j] = tab[i - 1][j];
            else
            {
                tab[i][j] = tab[i - 1][j] + tab[i - 1][j - a[i - 1]];
            }
        }
    }
 
 
    return tab[n][sum];
thankyou
