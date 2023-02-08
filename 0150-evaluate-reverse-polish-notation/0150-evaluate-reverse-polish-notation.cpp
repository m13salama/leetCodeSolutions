#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        init;
        stack<int> st;
        int n = tokens.size();
        int res=0;
        
        for(int i=0; i<n; i++){
           if(tokens[i] == "*" || tokens[i] == "/" || tokens[i] == "+" || tokens[i] == "-"){
               int num1 = st.top(); st.pop();
               int num2 = st.top(); st.pop();
               st.push(performOperation(num1, num2, tokens[i]));
           }else{
               st.push(stoi(tokens[i]));
           }
        }
        return st.top();
        
    }
    int performOperation(int num1, int num2, string op){
        if(op == "*" ) return num1 * num2;
        if(op == "/" ) return num2 / num1;
        if(op == "+" ) return num1 + num2;
        if(op == "-" ) return num2 - num1;
        return 0;

    }
};