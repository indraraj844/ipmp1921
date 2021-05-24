class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int s[], int f[], int n)
    {
      
       vector<pair<int,int>>p;
       for(int i=0;i<n;i++)
       {
           p.push_back(make_pair(f[i],s[i]));
       }
       sort(p.begin(),p.end());
       int count=1;
       int res=p[0].first;
       for(int i=1;i<n;i++)
       {
           if(p[i].second>res)
            {
                res=p[i].first;
                count++;
            }
       }
       return count;
    }
};

time complexity o(nlog(n))
