#include <bits/stdc++.h>
using namespace std;

    void inplace(string str)
    {
        int l=str.length();
        for(int i=1;i<l;i=i+2)
        {
            str+=str[i];
            
        }
        int p=(l%2)==0?l-1:l-2;
        for(int i=p;i>0;i=i-2)
        {
            str.erase(str.begin()+i,str.begin()+i+1);
            cout<<str;
            cout<<endl;
        }
    }

int main()
{
    string str="a1b2c3d4";
    inplace(str);
    return 0;
}
