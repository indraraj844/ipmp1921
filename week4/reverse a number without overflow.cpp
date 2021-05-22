class Solution {
public:
   long  int reverse(int x) {
    int rem, result=0;
        bool isNeg = false;
        if(x<0){
            isNeg = true;
            if(INT_MAX*-1 > x){
                return 0;
            }
            x = x*-1;
        }
        while(x>0){
            rem = x%10;
            x = x/10;
      
			if(isNeg && (INT_MIN/10)*-1 < result){
				return 0;
			} 
            else if(!isNeg && INT_MAX/10 <result){
                return 0;
            }
            result = result*10 + rem;
        }
        
        if(isNeg){
            if(INT_MAX*-1 > result){
                return 0;
            }
            result = result*-1;
        }
        
        return result;
    }
};
