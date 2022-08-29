class Solution {
public:
    int numberOfSteps(int num) {
        return (31-(__builtin_clz(num | 1))+__builtin_popcount(num));
    }
};