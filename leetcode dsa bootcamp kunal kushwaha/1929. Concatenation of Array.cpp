// o(n) and o(1) approach
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        //o(1)
        int n = nums.size();
        for(int i =0; i<n; i++){
            nums.push_back(nums[i]);
        }
        return nums;
        
    }
};

//o(n) and o(n) approach
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(2*(nums.size()), 0);
        
        for(int i =0; i<nums.size(); i++){
            ans[i]= nums[i];
        }
        for(int i =0; i<nums.size(); i++){
            ans[i+nums.size()]= nums[i];
        }
        
        return ans;
    }
};
or
int n = nums.size();
 vector<int> ans(2*(n), 0);
        
        for(int i =0; i<2*n; i++){
            ans[i]= nums[i%n];
        }
        return ans;