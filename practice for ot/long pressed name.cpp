class Solution {
public:
    bool isLongPressedName(string name, string typed) {
     
       int i=0,j=0;
        while(i<typed.length()&& j<name.length())
        {
            if(typed[i]!=name[j])return false;
         while(typed[i]==name[j] && i<typed.length()&& j<name.length())
         {
             i++;j++;
         }
         while(i<typed.length()&& typed[i]==typed[i-1])i++;
        }
        
        return i==typed.length()&& j==name.length();
        
    }
};
