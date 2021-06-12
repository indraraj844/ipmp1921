class Solution {
public:
    
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int i=n-1,carry=1;
        while(i>=0)
        {
            if(digits[i]+carry==10)
            {
                digits[i--]=0;
                carry=1;
            }
            else
            {
                digits[i]++;
                carry=0;
                break;
            }
        }
        if(carry)
        {
            digits.insert(digits.begin()+0,1);
       }
        return digits;
    }
};
