class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size();
       long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=chalk[i];
        }
        int p=k%sum;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(p<chalk[i])
            {
                 ans=i;
                break;
            }
            else
                p-=chalk[i];
        }
        return ans;
    }
};
