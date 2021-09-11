class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //hashing
        //  vector<int> res;
        // unordered_map<int, int> mp; //hashtable
        // for(int i =0; i<numbers.size(); i++){
        //     // if the target - nums[i] is found in the hashtable, i.e we found the pair
        //     if(mp.find(target-numbers[i]) != mp.end()){
        //         res.push_back(mp[target-numbers[i]]); //inserting index of found elem
        //         res.push_back(i+1); // inserting the currenting elem such that it result rqd sol
        //         return res;
        //     }
        //     // if not found, then store the key-value pair in hashtable
        //     mp[numbers[i]] = i+1;
        // }
        // return res; // when found, it will result some pair and if not then return an empty vector
        int start = 0;
        int end = nums.size()-1;
        int n = nums.size();
        vector<int> ans;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(nums[start] + nums[end] == target){
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }
            else if(nums[start] + nums[end] > target){
                end --;
            }
            else if(nums[start] + nums[end] < target){
                start ++;
            }
        }
        return ans;
    }
};