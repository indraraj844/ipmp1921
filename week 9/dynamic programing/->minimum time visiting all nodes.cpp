
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& point) {
      int count=0;
     int n=point.size();
        for(int i=0;i<n-1;i++)
        {
            int x1=point[i][0];
             int x2=point[i+1][0];
             int y1=point[i][1];
             int y2=point[i+1][1];
            
          count+=max(abs(x2-x1),abs(y2-y1));
            
        }
        return count;
        
    }
};
thankyou
