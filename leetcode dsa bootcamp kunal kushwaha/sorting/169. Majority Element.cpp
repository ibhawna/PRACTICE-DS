class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
     
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]] ++;
        }
        int n = nums.size();
        n = n/2;
        int output;
        for(auto it: mp){
            if(it.second > n){
                output = it.first;
            }
            
        }
        return output;
        
//         // SORTING
        
        sort(nums.begin(), nums.end()); 
        return nums[nums.size() / 2];
        
        //Nth element
        
        nth_element(nums.begin(), nums.begin() + nums.size() / 2, nums.end());
        return nums[nums.size() / 2];
        
        //moore majortiy algo
        int candidate = -1;
        int votes = 0;
        for(int i = 0; i<nums.size(); i++){
            if(votes == 0){
                candidate = nums[i];
                votes = 1;
            }
            else {
                if(nums[i] == candidate){
                    votes++;
                }
                else{
                    votes--;
                }
            }
        }
        int count = 0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i] == candidate){
                count++;
            }
        }
        if(count > (nums.size())/2){
            return candidate;
        }
        else{
            return -1;
        }
        
        // randomization
        int n = nums.size(), candidate, counter;
        srand(unsigned(time(NULL)));
        while (true) {
            candidate = nums[rand() % n], counter = 0;
            for (int num : nums) {
                if (num == candidate) {
                    counter++;
                }
            }
            if (counter > n / 2) {
                break;
            }
        }
        return candidate;
        
    }
};