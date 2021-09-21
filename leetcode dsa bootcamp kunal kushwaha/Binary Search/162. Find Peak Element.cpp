
//linear search
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxel = MIN_INT;
        for(int i=0; i < nums.size();i++){
            maxel = max(maxel, nums[i]);
        }
        return maxel;
};
or 
        int i = 0;
        while(i < nums.size() - 1 and nums[i] <= nums[i + 1]){
            i++;
        }
        return i;


//binary search