method 1 using sorting the array o(nlogn)
class Solution {
public:
    int thirdMax(vector<int>& arr) {
      int n=arr.size();
      if(n<3)return *max_element(arr.begin(),arr.end());
        
      sort(arr.begin(),arr.end());
        int k=2;
        int f=arr[n-1];
      for(int i=n-2;i>-1;i--)
      {
          if(arr[i]!=f)
          {
              f=arr[i];
              k--;
          }
          if(k==0)return f;
      }
      return arr[n-1];
        
    }   
};
method 2using a ordered set

  class Solution {
public:
    int thirdMax(vector<int>& arr) {
        set<int,greater<int>>s(arr.begin(),arr.end());
          set<int,greater<int>>::iterator it=s.begin();
        if(s.size()<3)return *it;
        it++;it++;
        return *it;
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
 2 version
 class Solution {
public:
    int thirdMax(vector<int>& arr) {
        long long int first=-1e10;
        long long int  second=-1e10;
         long long int third=-1e10;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>first)
            {
                third=second;
                second=first;
                first=arr[i];
            }
            else if(second<arr[i]&& arr[i]<first)
            {
                third=second;
                second=arr[i];
            }
            else if(second>arr[i]&& arr[i]>third)
                third=arr[i];
        }
        if(third==-1e10)
            return *max_element(arr.begin(),arr.end());
        return third;
    }
};
thankyou
