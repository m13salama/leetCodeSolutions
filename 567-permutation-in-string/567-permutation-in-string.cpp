const static auto fast = []{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int> m1;
        map<char,int> m2;

        if(s1.size() > s2.size()) return false;

        for (int i=0; i<s1.size(); ++i ){
            m1[s1[i]]++;
        }

        int p1=0, p2=s1.size();

        for (int i=0; i<s1.size(); ++i ){
            m2[s2[i]]++;
        }
        int matches=0;
        for(int i=0; i<26; i++){
            if(m1['a'+i] == m2['a'+i]) matches++;
        }
        while(matches<26 && p2<s2.size()){
            m2[s2[p2]]++;
            if(m1[s2[p2]] == m2[s2[p2]]){
                matches++;
            }else if(m1[s2[p2]]+1 == m2[s2[p2]]){
                matches--;
            }
            m2[s2[p1]]--;
            if(m1[s2[p1]] == m2[s2[p1]]){
                matches++;
            }else if(m1[s2[p1]]-1 == m2[s2[p1]]){
                matches--;
            }
            p1++; p2++;
        }
        return matches==26;
    }
};