method 1 brute force o(n^2)
method 2 
  bool canPair(vector<int> nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++)sum+=nums[i];
        
        int n=nums.size();
            if(sum%k || n%2)return false;
            
            unordered_map<int,int>mp;
                for(int i=0;i<n;i++)
                {
                    mp[nums[i]%k]++;
                }
                
            for(int i=0;i<n;i++)
            {
               int rem=nums[i]%k;
               if(rem*2==k ||  rem==0)
               {
                 if(mp[rem]%2)return false;  
               }
              
               else 
               {
                   if(mp[rem]!=mp[k-rem])return false;
               }
            }
            return true;
         
            
    }
  o(n) 
  s(n)
    
