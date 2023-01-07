#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
            
    bool squareIsWhite(string coordinates) {
        init;
        return !(((coordinates[0]-'a')%2)==((coordinates[1]-'1')%2));
    }
};