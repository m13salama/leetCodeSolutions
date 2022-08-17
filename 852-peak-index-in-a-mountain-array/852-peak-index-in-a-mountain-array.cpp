class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
		        
        int l=0, r = n-1, mid;
        while(l<=r){
            mid = l + (r-l)/2;
            if(mid!=n-1 && arr[mid]>arr[mid+1])   r = mid-1;
            else    l = mid+1;
        }
        return arr[mid]<arr[mid+1]? mid+1: mid;
	}
};