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
        d=d%n;
        int gcd_=gcd(n,d);

    for (int i = n-1; i >n-1-gcd_; i--) {
     
        int temp = arr[i];
        int j = i;
 
        while (1) {
            int k = j - d;
            if (k <= -1)
                k = k +n;
 
            if (k == i)
                break;
 
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
    }
};
