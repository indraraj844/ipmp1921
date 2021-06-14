class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int n=words.size();
         string morse[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
         set<string>st;
        for(int i=0;i<n;i++)
        {
            string s="";
            for(int j=0;j<words[i].length();j++)
            {
                int asint=words[i][j]-97;
                s+=morse[asint];
                
            }
            st.insert(s);
        }
        return st.size();
    }
};
jab jab how many aayega ek bar set ke bare me sochange
thankyou'
