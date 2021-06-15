class Solution {
public:
    string toGoatLatin(string sentence) {
        int n=sentence.size();
        vector<char> vowel{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I',              'O', 'U'};
        string res="";
        stringstream s(sentence); 
        string word;
        int curr=1;
        while(s>>word)
        {
          if(count(vowel.begin(),vowel.end(),word[0]))
          {
              word+="ma";
              word.append(curr,'a');
              res+=word;
              res.push_back(' ');
              curr++;
              
          }
            else
            {
                char c=word[0];
                word.erase(0,1);
                word.push_back(c);
                word+="ma";
              word.append(curr,'a');
              res+=word;
              res.push_back(' ');
              curr++;
            }
        }
        res.pop_back();
        return res;
        
    }
};
thankyou
