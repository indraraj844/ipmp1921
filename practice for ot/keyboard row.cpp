class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set <char> set1{'q','w','e','r','t','y','u','i','o','p'};
        unordered_set <char> set2{'a','s','d','f','g','h','j','k','l'};
        unordered_set <char> set3{'z','x','c','v','b','n','m'};

        vector <string> output;

        unordered_set <char> myset;
        for(auto p:words)
        {
            if(set1.find(tolower(p[0]))!=set1.end())
                myset=set1;
            else if(set2.find(tolower(p[0]))!=set2.end())
                myset=set2;
            else
                myset=set3;
            
            
            int flag=1;
            for(auto l:p)
            {
                if(myset.find(tolower(l))==myset.end())
                {
                 flag=0;
                 cout<<l<<" ";
                    break;
                }
            }
            
            if(flag)
                output.push_back(p);
        }
        return output;
    }
};
here we do two work
1.to chosse which set we will search (so we search it by first character)
2. ensure that except than first all character are in this set 
