class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end());
        int start = intervals[0][0], end = intervals[0][1];
        int n = intervals.size();
        if(n == 1){
            res.push_back({start, end});
            return res;
        }
        for(int i = 0; i < n-1; i++){
            if(end >= intervals[i+1][0] || start >= intervals[i+1][0]){
                start = min(start, intervals[i+1][0]);
                end = max(end, intervals[i+1][1]);
            }
            else {
                res.push_back({start, end});
                start = intervals[i+1][0];
                end = intervals[i+1][1];
            }
            if(i == n-2) res.push_back({start, end});
        }
        return res;
    }
};
