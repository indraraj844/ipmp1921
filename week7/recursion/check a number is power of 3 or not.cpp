method 1 efficient o(1)
  class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1)return false;
        return 1162261467 % n == 0;
    }
};
method 2 using recursion
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1)return false;
        while(n>1)
        {
            if(n%3)return false;
            n/=3;
        }
        return true;
    }
};
thankyou
