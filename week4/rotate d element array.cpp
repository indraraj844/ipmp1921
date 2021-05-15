method 1;
class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n=arr.size();
        for(int i=0;i<k;i++)
        {
            int temp=arr[n-1];
            for(int j=n-1;j>0;j--)
                arr[j]=arr[j-1];
            
            arr[0]=temp;
        }
    }
};
method 2:
class Solution {
public:
    int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
    
    void rotate(vector<int>& arr, int d) {
        int n=arr.size();
        int no=gcd(n,d);
        
        int j=0;
        for(int i=0;i<no;i++)
        {
            int temp=arr[j];
            int l=j;
            while(l<n-no)
            {
                arr[l]=arr[l+d];
                l=l+no;
            }
            arr[l]=temp;
            j++;
        }
    
        }
};
need to convert

