class Solution {
public:
    bool checkStraightLine(vector<vector<int>>&arr) {
        int n=arr.size();
             int x1=arr[0][0];
             int y1=arr[0][1];
             int x2=arr[1][0];
             int y2=arr[1][1];
        
        for(int i=0;i<n;i++)
        {
            if(x2-x1==0)
            {
                if(arr[i][0]!=x1)return false;
            }
            else{
                 int t=(arr[i][1]-y1)*(x2-x1)-((y2-y1))*(arr[i][0]-x1);
                cout<<t;
         if(t!=0)return false;
            }
          
        }
        return true;
    }
};
two breaker
1.divide a number can give wrong result;
2.line slope can be infinite
thanyou
