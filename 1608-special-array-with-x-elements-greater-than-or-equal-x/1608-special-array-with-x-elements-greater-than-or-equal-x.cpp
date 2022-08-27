class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        int low = 0 , high = n  , mid;
		/*
			possible range of x : [0 , n]
			low = 0 
			high = n
		*/
		
        while(low<=high)
        {
            mid = low + (high-low)/2;
            
            int cnt = 0; 
           
		   //count the number of elements greater or equal to mid
		   for(int i:nums)
                if(i>=mid)
                    cnt++;
            
			//if number of elements greater or equal to mid == mid , then return mid 
            if(cnt == mid)
                    return mid;
            
			//if  ( number of elements greater or equal to 'mid' ) > 'mid' 
			//then 'x' can possibly lie in [ mid + 1 , high ] 
			//why?
			//because , if for 'mid' , there are greater than 'mid' number of elements 
			//which are greater than 'mid' value
			//surely, for any 'x' in [0 , mid - 1], the number of elements greater than 
			//or equal to 'x' should be greater than 'x' itself
			//therefore search space becomes [mid + 1 , high]
            if(cnt > mid)
                    low = mid + 1;
            else 
                    high = mid - 1;
        }
		
        return -1;
    }
};