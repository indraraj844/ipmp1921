#include <bits/stdc++.h>
using namespace std;
     
     int mul(int n1,int n2)
     {
         if(n1<10 ||n2<10)return n1*n2;
         else
         {
             int m=floor(min(log(n1),log(n2))/2);
             int low1,high1,low2,high2;
             int x=pow(10,m);
             low1=n1%x;
             high1=n1/x;
             low2=n2%x;
             high2=n2/x;
             
             int z0,z1,z2;
             z0 = mul(low1, low2);
             z1 = mul((low1 + high1), (low2 + high2));
             z2 = mul(high1, high2);
             
             return (z2*pow(10,2*m)+(z1-z0-z2)*pow(10,m)+z0);
             
         }
     }

int main()
{
   int n1,n2;
   cout<<"enter two number:";
   cin>>n1>>n2;
   cout<<"the multipication of number="
     <<mul(n1,n2);
     return 0;
}
thankyou
