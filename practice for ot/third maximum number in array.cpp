method 1 using sorting the array o(nlogn)
class Solution {
public:
    int thirdMax(vector<int>& arr) {
        int n=arr.size();
        if(n==1)return arr[0];
        if(n==2)return arr[0]>arr[1]?arr[0]:arr[1];
        
        sort(arr.begin(),arr.end());
        int k=3;
        int i;
        for( i=n-1;i>=1;i--)
        {
            if(arr[i]>arr[i-1])
                k--;
            if(k==0)
                return arr[i];
        }
        if(k==1&& i==0)return arr[0];
        return arr[n-1];
    }
};
method 2using a ordered set

  class Solution {
public:
    int thirdMax(vector<int>& arr) {
        set<int,greater<int>>s;
        int n=arr.size();
        for(int i=0;i<n;i++)
            s.insert(arr[i]);
        
        set<int,greater<int> >::iterator itr;
         itr=s.begin();
        if(s.size()<3)
            return *itr;
        advance(itr,2);
        return *itr;
    }
};
method 3 best without extra space o(n)
  class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int first = INT_MIN, second = INT_MIN, third = INT_MIN;
        int c=0,flag=0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == INT_MIN && flag == 0) {
                c++;
                flag = 1;
            }
            else if(nums[i] > first) {
                third=second;
                second=first;
                first=nums[i];
                c++;
            }
            else if(nums[i] > second && nums[i] < first) {
                third=second;
                second=nums[i];
                c++;
            }
            else if(nums[i] > third && nums[i] < second){
                third = nums[i];
                c++;
            }
        }
        if(c < 3) return first;
        return third;
    }
};
