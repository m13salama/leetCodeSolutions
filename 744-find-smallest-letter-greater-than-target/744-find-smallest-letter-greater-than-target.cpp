#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)


class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        init;
        int n = letters.size();
        int l=0, r=n-1;
        long long int mid;
        while(l<=r){
            mid = l + (r - l) / 2;
    
            if (letters[mid] <= target)
                l = mid + 1;
            else
                r = mid-1;
        }
        if(mid == n-1 && letters[mid]<=target) return letters[0];
        return letters[mid]>target? letters[mid]:letters[mid+1];
    }
};