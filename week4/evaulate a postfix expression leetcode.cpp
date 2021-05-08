class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++)
        {
            
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/")
            {
                
                int o1=st.top();
                st.pop();
                int o2=st.top();
                st.pop();
                
                 if(tokens[i]== "+")
                 st.push(o1+o2);
                if(tokens[i]== "-")
                st.push(o2-o1);      
                if(tokens[i]== "*")
                st.push(o1*o2);              
                if(tokens[i]=="/")
                st.push(o2/o1);
            }
            else
                st.push(stoi(tokens[i]));
            
        }
        return st.top();
    }
};
