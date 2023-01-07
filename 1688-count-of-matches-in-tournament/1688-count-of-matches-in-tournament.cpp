class Solution {
public:
    int numberOfMatches(int n) {
        //every match we eliminate 1 team
        //we need (n-1) matches to eliminate (n-1) teams
        //the remaining one is the champion
        return n-1;
    }
};