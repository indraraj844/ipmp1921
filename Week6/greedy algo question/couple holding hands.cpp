class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        int n=row.size();
        map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++)
            mp[row[i]]=i;
        
        for(int i=0;i<n-2;i=i+2)
        {
           if(row[i]%2==0)
           {
               if(row[i+1]!=row[i]+1)
               {ans++;
                  int temp=row[i+1];
                  int index=mp[row[i]+1];
                   row[i+1]=row[index];
                   row[index]=temp;
                   mp[temp]=index;  
               }
            }
            else
            {
               if(row[i+1]!=row[i]-1)
               {ans++;
                   int temp=row[i+1];
                  int index=mp[row[i]-1];
                   row[i+1]=row[index];
                   row[index]=temp;
                   mp[temp]=index;  
               }
            }
        }
      for(int i=0;i<n;i++)
          cout<<row[i]<<" ";
        return ans;
        
    }
};
