method 1 brute force
method 2 usign map
class Solution {
public:
    vector<int> findAnagrams(string str, string ptr) {
        int l1=str.size();
        int l2=ptr.size();
      map<char,int>mp;
       vector<int>v;
    
     int count1=0;
    
    for(int i=0;i<l2;i++)
    {
        if(mp[ptr[i]]==0)
        {count1++;
        }
         mp[ptr[i]]++;
    }
    for(int i=0;i<l2;i++)
    { 
        mp[str[i]]--;
        
        if(mp[str[i]]==0)
        {count1--;
        }
         
    }
   
     for(int i=l2;i<l1;i++)
     {
        if(count1==0)
        v.push_back(i-l2);
        
        if(mp[str[i-l2]]==0)
        {count1++;
        }
         mp[str[i-l2]]++;
         
        mp[str[i]]--;
        if(mp[str[i]]==0)
        {count1--;
        }   
        
     }
        if(count1==0)
        v.push_back(l1-l2);
        
        return v;
    }
};
method 3 using two count array
class Solution {
public:
    bool compare(int count1[],int count2[])
    {
        for(int i=0;i<26;i++)
        {
            if(count1[i]!=count2[i])return false;
        }
        return true;
    }
    
    vector<int> findAnagrams(string str, string ptr) {
        int l1=str.size();
        int l2=ptr.size();
       vector<int>v;
        if(l1<l2)return v;
    int count1[26]={0},count2[26]={0};
    for(int i=0;i<l2;i++)
    {
       count1[str[i]-'a']++;
    }
    for(int i=0;i<l2;i++)
    { 
        count2[ptr[i]-'a']++;
         
    }
   
     for(int i=l2;i<l1;i++)
     {
       if(compare(count1,count2))
           v.push_back(i-l2);
         
         count1[str[i]-'a']++;
         count1[str[i-l2]-'a']--;
        
     }
        if(compare(count1,count2))
        v.push_back(l1-l2);
        
        return v;
    }
};
very near to brute force


  
