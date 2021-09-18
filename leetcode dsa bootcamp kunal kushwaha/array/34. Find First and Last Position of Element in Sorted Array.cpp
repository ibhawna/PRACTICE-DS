class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int h = nums.size() - 1;
        
        vector<int> res{-1,-1};
        //first 
        while( l <= h ){
            int mid = (l+h)/2;
            if(target == nums[mid]){
                res[0] = mid;
                h = mid - 1;
            }
            else if(target > nums[mid]){
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }
        
        // last
         l = 0;
         h = nums.size() - 1;
        while( l <= h ){
            int mid = (l+h)/2;
            if(target == nums[mid]){
                res[1] = mid;
                l = mid + 1;
            }
            else if(target > nums[mid]){
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }
       
        return res;
    }
};