// two pointers + sorting + loops
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i<n; i++){
            if ((i > 0) and (nums[i] == nums[i - 1])) continue; 
            for(int j= i+1; j<n;j++){
                if ((j > i + 1) and (nums[j] == nums[j - 1])) continue; 
                int curr_sum = target - nums[i] - nums[j];
                int l = j + 1;
                int r = n - 1;
                while(l < r){
                    int sum =nums[l] + nums[r];
                    if(curr_sum == sum){
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        l++;
                        r--;
                        while(l < r and nums[l] == nums[l-1]){
                            l++;
                        }
                        while(l<r and nums[r] == nums[r+1]){
                            r--;
                        }
                    }
                    else if(sum < curr_sum){
                        l++;
                    }
                    else if( sum > curr_sum){
                        r--;
                    }
                    
                }
            }
        }
        return ans;
        
        
        
        
        
        
        
        
        //brute
        // vector<vector<int>> ans;
        // set<vector<int>> res;
        // int n = nums.size();
        // sort(nums.begin(), nums.end());
        // for(int i = 0; i < n-3; i++){
        //     for(int j = i+1; j <n-2; j++){
        //         for(int k = j+1; k<n-1; k++){
        //             for(int a = k + 1; a < n ; a ++){
        //                 int sum = nums[i] + nums[j] + nums[k] + nums[a];
        //                 if(sum == target){
        //                     vector<int> v = {nums[i], nums[j], nums[k], nums[a]};
        //                     res.insert(v);
        //                 }
        //             }
        //         }
        //     }
        // }
        // for(auto it: res){
        //     ans.push_back(it);
        // }
        // return ans;
    }
};