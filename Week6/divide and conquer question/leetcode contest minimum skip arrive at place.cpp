class Solution {
public:
    int helper(vector<int>& dist,int n,int speed,int hour,int time,int i)
    {  
        if(time>hour||i>n)return INT_MAX-1;
        if(i==n&&time<=hour)return 0;
        return  min(1+helper(dist,n,speed,hour,time+(dist[i]/speed),i+1)
                   ,helper(dist,n,speed,hour,time+(ceil(dist[i]/speed)),i+1));
       
    }
    int minSkips(vector<int>& dist, int speed, int hour) {
        int sum=0;
        for(int i=0;i<dist.size();i++)
        {
            sum+=dist[i];
        }
        if((sum/speed)>hour)return -1;
        int time=0,count=0;
        int n=dist.size();
        return helper(dist,n,speed,hour,time,0);
    }
};
