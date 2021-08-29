// using division
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // division 
        int product = 1;
        int count = 0;
        for(int i =0; i < nums.size(); i++){
            if(nums[i] == 0){
                count++;
            }
            product *= nums[i];
        }
        if(count == 1){
            int newp = 1;
             for(int i =0; i<nums.size(); i++){
                 if(nums[i] == 0){
                     newp = newp * 1;
                 }
                 else{
                     newp = newp * nums[i];
                 }
             }
            for(int i =0; i<nums.size(); i++){
                if(nums[i] == 0){
                    nums[i] = newp;
                }
                else{
                    nums[i] = 0;
                }
            }
            return nums;
        } 
        
        else if(count == 0){
            for(int i =0; i < nums.size(); i++){
                nums[i] = (product) / (nums[i]);
            }
        }
        else{
            for(int i =0; i < nums.size(); i++){
                nums[i] = 0;
            }
            return nums;
        }
        
        
        
        return nums;
    }
};