class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        int prev = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i] % 2 == 0){
                swap(nums[i], nums[prev]);
                prev++;
            }
        }
        return nums;
//         while(start <=  end){
//             if((nums[start] % 2 == 0)){
//                 if(nums[end] % 2 !=0){
//                     start++;
//                     end--;
//                 }
//                 else{
//                     start++;
//                 }
                 
//             }
//             else{ 
//                 if(nums[end] % 2 == 0){
//                     swap(nums[start], nums[end]);
//                     start++;
//                     end--;
//                 }
//                 else{
//                     end--;
//                 }
                   
//             }
//         }
        // return nums;
    }
};