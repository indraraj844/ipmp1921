 int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        long long  n=nums1.size();
        long long  max_diff=-1e9;
        
        long long sum=0;
        long long ele=0;
        for(long long  i=0;i<n;i++)
        {
            if(abs(nums1[i]-nums2[i])>max_diff)
            {
                max_diff=abs(nums1[i]-nums2[i]);
                ele=nums2[i];
            }
            sum+=abs(nums1[i]-nums2[i]);
        }
        if(sum==0)return 0;
        else
        {
           long long min_diff=1e9;
            for(long long i=0;i<n;i++)
            {
                min_diff=min(min_diff,abs(nums1[i]-ele));
            }
            return (sum-max_diff)+min_diff;
        }
    }
};
