class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //hashing
        int ans;
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(int i = 0; i <= 10000; i++){
            if(mp[i] == 1){
                ans = i;
                break;
            }
        }
        return ans;
    }
};