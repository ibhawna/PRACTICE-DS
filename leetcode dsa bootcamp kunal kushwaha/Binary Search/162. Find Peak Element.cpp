class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size() == 1){
            return 0;
        }
        int i = 0;
        while(i < nums.size() - 1 and nums[i] <= nums[i + 1]){
            i++;
        }
        return i;
    }
};