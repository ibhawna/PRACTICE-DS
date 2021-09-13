class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        // int maxelm = *max_element(nums.begin(), nums.end());
        // int index;
        // for(int i=0; i <nums.size(); i++){
        //     if(nums[i] == maxelm){
        //         index = i;
        //     }
        // }
        // int count = 0;
        // for(int i = 0; i <nums.size(); i++){
        //     if(nums[i] != maxelm and nums[i] * 2 <= maxelm){
        //         count++;
        //     }
        // }
        // if(count == nums.size() -1 ){
        //     return index;
        // }
        // else{
        //     return -1;
        // }
        
        
        // this will work with top two max numbers as well.
        int max1 = 0, max2 = 0, idxOfMax1 = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > max1) {
            max2 = max1;
            max1 = nums[i];
            idxOfMax1 = i;
        } else if (nums[i] > max2) {
            max2 = nums[i];
        }
    }        
    return max1 >= max2 * 2 ? idxOfMax1 : -1;
    }
};