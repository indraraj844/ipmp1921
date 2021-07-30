class Solution {
public:
    int findMinMoves(vector<int>& machines) {
      int n=machines.size();
      int m=INT_MIN;
        int  sum=0;
        for(auto p:machines)
        {
            sum+=p;
            m=max(m,p);
        }
        
        if(sum%n!=0)return -1;
      //main logic
        int l=sum/n;
        
        int ans=0,co=0;
            for(int i=0;i<machines.size();i++){
                co+=machines[i]-l;
                ans=max(ans,max(abs(co),machines[i]-l));
            }
            return ans;
        
    }
};
