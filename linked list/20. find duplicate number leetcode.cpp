// hashing -> o(n) and o(n)
int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        int rep = -1;
        for(int i =0; i<nums.size(); i++){
            mp[nums[i]]++;
            if(mp[nums[i]] >= 2){
                rep =  nums[i];
                break;
            }
        }
        return rep;
        
    }

    // linked list cycle method
    
