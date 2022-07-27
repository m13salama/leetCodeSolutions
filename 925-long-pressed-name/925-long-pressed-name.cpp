const static auto fast = []{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int p1=0, p2=0;
        if(typed.size()< name.size()) return false;
        while(p1<name.size()-1 && p2<typed.size()-1){
            if(name[p1+1]==typed[p2+1] && name[p1]==typed[p2]){
                p1++; p2++;
            }else if(name[p1]==typed[p2]) p2++;
            else return false;
        }
        while(p2<typed.size()){
            if(name[p1]!=typed[p2]) return false;
            p2++;
        }
        if(p1 != name.size()-1) return false;
        return true;

    }
};