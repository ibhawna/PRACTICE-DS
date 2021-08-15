class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int i =0; i<nums.size(); i++){
            if(mp.find(target-nums[i]) != mp.end()){
                ans.push_back(mp[target - nums[i]]); //index of first ans 
                ans.push_back(i); //index of second elem
                return ans;
            }
            mp[nums[i]] = i;
        }
        return ans;
        
        
    }
};