class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i =0; i<nums.size(); i++){
            nums[i] = ((nums[i]) * (nums[i]));
        }
        sort(nums.begin(), nums.end());
        return nums;
        
        
        
        vector<int> ans(nums.size() ,  0);
        int i =0;
        int j = nums.size()-1;
        int k = nums.size()-1;
        while( i <= j){
            int a = nums[i] * nums[i];
            int b = nums[j] * nums[j];
            if(a > b){
                ans[k] = a;
                i++;  
            }
            else{
                ans[k] = b;
                j--;
                
            }
            k--;
        }
        
        return ans;
    }
};