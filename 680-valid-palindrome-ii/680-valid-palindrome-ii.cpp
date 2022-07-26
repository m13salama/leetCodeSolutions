const static auto fast = []{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
	bool isPalindrome(string s){
		for(int i=0; i<s.length()/2; i++){
			if(s[i]==s[s.length()-i-1]) continue;
			else return false;
		}
		return true;
	}
	bool validPalindrome(string s) {
		for (int i=0; i<s.length()/2; i++){
			if(s[i]==s[s.length()-i-1]) continue;
			else{
				char c=s[i];
				s.erase(s.begin()+i);
				if(isPalindrome(s)==true) return true;
				else {
					s.insert(s.begin()+i,c);
					s.erase(s.begin()+s.length()-i-1);
					if(isPalindrome(s)==true) return true;
					else return false;
				}
			}
		}
		return true;
	}
};