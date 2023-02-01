#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        init;
        int p1=0, p2=numbers.size()-1;
        int sum = numbers[p1]+numbers[p2];
        while(p1<p2){
            if(sum == target) return vector<int> {p1+1,p2+1};
            else if (sum > target) p2--;
            else if (sum < target) p1++;
            sum = numbers[p1]+numbers[p2];
        }
        return vector<int> {p1+1,p2+1};
    }
};