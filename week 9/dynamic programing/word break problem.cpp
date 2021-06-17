recursion
bool dictionarycontain(string str,vector<string> &b)
 {
     for(int i=0;i<b.size();i++)
     {
         if(b[i].compare(str)==0)return true;
     }
     return false;
 }
int wordBreak(string str, vector<string> &b) {
    //code here
    int size=str.size();
    if(size==0)return 1;
    
    for(int i=1;i<=size;i++)
    {
        if(dictionarycontain(str.substr(0,i),b) &&wordBreak(str.substr(i,size-i),b))
        return 1;
    }
    return 0;
}
dynamic
