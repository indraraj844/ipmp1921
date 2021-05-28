class Solution {
public:
 
    int leastInterval(vector<char>& tasks, int n) {
        if(n==0)return tasks.size();
        int freq[26]={0};
        for(int i=0;i<tasks.size();i++)
        {
            freq[tasks[i]-'A']++;
        }
         sort(freq,freq+26);
       for(int i=0;i<26;i++)
       {
           cout<<freq[i]<<" ";
       }
        cout<<endl;
        int max_val=freq[25]-1;
        cout<<max_val;
        int idle=max_val*n;
        
        for(int i=24;i>-1;i--)
        {
            idle-=min(max_val,freq[i]);
        }
        cout<<idle;
        if(idle<0)return tasks.size();
        return tasks.size()+idle;
    }
};
o(n) 
 in single loop of task array
 
