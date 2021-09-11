class Solution { // binary search
    
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n = nums.size();
        int l =0;
        int h = n-1;
        int mid;
        while(l<=h){
            mid = l+(h-l)/2;
            if (nums[mid] < target)
                l = mid+1;
            else
                h = mid-1;
        }
        return l;
    
    }
};