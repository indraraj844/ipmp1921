#include <bits/stdc++.h>
using namespace std;

void printLCSubStr(char* x, char* y, int m, int n)
{
   int lc[m+1][n+1];
   int len=0,row,col;
   for(int i=0;i<m+1;i++)
   {
      for(int j=0;j<n+1;j++)
      {
          if(i==0 ||j==0)lc[i][j]=0;
          else if(x[i-1]==y[j-1])
          {
              lc[i][j]=1+lc[i-1][j-1];
              if(len<lc[i][j])
              {
                  len=lc[i][j];
                  row=i;
                  col=j;
              }
          }
          else 
          lc[i][j]=0;
      }
   }
   string ans;
   while(lc[row][col]!=0)
   {
       ans+=x[row-1];
       row--;
       col--;
   }
   reverse(ans.begin(),ans.end());
   cout<<" the longest commen substring is: "<<ans;
   
}


int main()
{
	char X[] = "OldSite:GeeksforGeeks.org";
	char Y[] = "NewSite:GeeksQuiz.com";

	int m = strlen(X);
	int n = strlen(Y);

	printLCSubStr(X, Y, m, n);
	return 0;
}
space complexity o(n*m)
logic : all substring element will be at a digonal 
so once you get zero you have to stop process imedetly
So we should to know that maximum pos of the character and i will go for a digonal 
that's solve
  
  #include<bits/stdc++.h>
using namespace std;

void printLCSubStr(string x, string y, int m, int n)
{
	int lc[2][n];
    int result=0;
    int end=0;
    int curr_row=0;
    for(int i=0;i<m+1;i++)
    {
     for(int j=0;j<n+1;j++)
     {
         if(i==0||j==0)lc[curr_row][j]=0;
         else if(x[i-1]==y[j-1])
         {
             lc[curr_row][j]=1+lc[1-curr_row][j-1];
             if(lc[curr_row][j]>result)
             {
                 result=lc[curr_row][j];
                 end=i-1;
             }
         }
         else
          lc[curr_row][j]=0;
     }
     curr_row=1-curr_row;
    }
    if(result==0)
    {
     cout<<"-1";
     return;
    }
    cout<<x.substr(end-result+1,result);
}
int main()
{
   string  X = "OldSite:GeeksforGeeks.org";
	string Y= "NewSite:GeeksQuiz.com";

	int m = X.length();
	int n = Y.length();

	printLCSubStr(X, Y, m, n);
	return 0;
}
space complexity o(n)
  thankyou
