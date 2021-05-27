bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return true;
       else
       {
           int start=n-1;
           int i=n-2;
           while(i>-1)
           {
               if(start<=i+nums[i])
               {start=i;
            }
               i--;
            }
           return start==0;
           
        }
    }
