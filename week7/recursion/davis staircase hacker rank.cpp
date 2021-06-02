nt stepPerms(int n) {
 if(n==1)return 1;
else if(n==2)return 2;
else if(n==3)return 4;
return stepPerms(n-1)+stepPerms(n-2)+stepPerms(n-3);
}
not valid for all case (time limit exceed)
  
  method 2;
int stepPerms(int n) {
int dp[n+1];
dp[0]=0;
dp[1]=1;
dp[2]=2;
dp[3]=4;
for(int i=4;i<n+1;i++)
{
    dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
}
return dp[n];
}
dp valid for all case
