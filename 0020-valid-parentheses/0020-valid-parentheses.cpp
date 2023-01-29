#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    bool isValid(string s) {
        init;
        stack<char> st;
        int n = s.size();
        
        for(int i=0; i<n; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }else{
                if(st.size()==0 || !valid(st.top(), s[i])) return false;
                st.pop();
            }
        }
        
        return st.size()==0? true : false;
    }
    bool valid(char c1, char c2){
        if(c1 == '(' && c2 == ')'){
            return true;
        }else if(c1 == '{' && c2 == '}'){
            return true;
        }else if(c1 == '[' && c2 == ']'){
            return true;
        }else return false;
    }
};