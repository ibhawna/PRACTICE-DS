class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int i=0; i < nums.size(); i++){
            if(mp.find(target-nums[i]) != mp.end()){
                ans.push_back(mp[target - nums[i]]);
                ans.push_back(i);
                break;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};


//brute o(n^2)
 vector<int> twoSum_nsquare(vector<int>& nums, int target) {
       vector<int>out;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    out.push_back(i);
                    out.push_back(j);
                    return out;
                }
            }
        }
        return out;
    }