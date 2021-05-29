method 1 brute force
class Solution {
public:
    int wiggleMaxLength(vector<int>&nums) {
        int n=nums.size();
        if(n==1){
            return 1;
        }
        int inc[n];//for incrementing element
        int dec[n];//for decresing element
        inc[0]=1;
        dec[0]=1;
        int ans=1;
    
         for(int i=1;i<n;i++)
         {
            inc[i]=1;
             dec[i]=1;
             for(int j=0;j<i;j++)
             {if(nums[i]>nums[j])
             {
                 inc[i]=max(inc[i],1+dec[j]);
             }
                else if(nums[i]<nums[j])
                {
                    dec[i]=max(dec[i],1+inc[j]);
                }
             }
             ans=max(ans,max(inc[i],dec[i]));
         }
       return ans;
        
    }
};

method 2(efficent)
class Solution {
public:
    int wiggleMaxLength(vector<int>&nums) {
        int n=nums.size();
        if(n==1){
            return 1;
        }
        int i=1;
        while(i<n && nums[i-1]==nums[i]){
            i++;
        }
        if(i==n){
            return 1;
        }
        bool pos=nums[i-1]<nums[i];
        int ans=2;
        while(i<n)
        {
            if(pos)
            {
              while(i<n && nums[i]>=nums[i-1])
              {
                  i++;
              }
                if(i<n){
                ans++;
                }
                pos=false;
            }
            else
            {
                while(i<n && nums[i]<=nums[i-1])
              {
                  i++;
              }
                if(i<n){
                ans++;
                }
                pos=true;
            }
        }
        return ans;
    }
};
o(n)
