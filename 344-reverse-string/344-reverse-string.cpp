class Solution {
public:
    void reverseString(vector<char>& s) {
        cin.tie(0);
        cout.tie(0);
        char temp;
        int n=s.size()-1;
        for(int i=0;i<=n/2;i++){
            temp=s[i];
            s[i]=s[n-i];
            s[n-i]=temp;
        }
        
    }
};