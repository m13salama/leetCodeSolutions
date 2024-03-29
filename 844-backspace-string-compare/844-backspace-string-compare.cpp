class Solution {
public:
    stack<int>st;//stack<char>st;
    stack<int>st1;//stack<char>st1;
    bool backspaceCompare(string s, string t) {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='#')
                st.push(s[i]);  
            else
            {
                if(st.empty())
                    continue;
                else st.pop();
            }
        }
        
        for(int i=0;i<t.size();i++)
        {
            if(t[i]!='#')
                st1.push(t[i]);
            else
            {
                if(st1.empty())
                    continue;
                else st1.pop();
            }
        }
        while(!st.empty() && !st1.empty())
        {
            if(st.top()!=st1.top())
                return false;
            st.pop();
            st1.pop();
        }
        return st.empty() && st1.empty();
    }
};