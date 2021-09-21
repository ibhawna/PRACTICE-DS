class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       if(nums.size() == 1){
            return 0;
        }
        int l = 0;
        int h = nums.size() - 1;
      
        while(l <= h){
            int m = l + ( h - l) / 2;
            if(m < nums.size()-1 and nums[m] < nums[m + 1]){
                l = m + 1;
            }
            else{
                h = m - 1;
            }
            
        }
        return nums[l];
       
        // int i = 0;
        // while(i < nums.size() - 1 and nums[i] <= nums[i + 1]){
        //     i++;
        // }
        // return nums[i];

        // int maxel = MIN_INT;
        // for(int i=0; i < nums.size();i++){
        //     maxel = max(maxel, nums[i]);
        // }
        // return maxel;
    }
};