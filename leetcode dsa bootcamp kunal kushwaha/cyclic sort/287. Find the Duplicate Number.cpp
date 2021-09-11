class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        //Cyclic Sort
        int i = 0;
        int n = arr.size();
        int ans = -1;
        while( i < arr.size()){
            if(arr[i] != i+1 ){
                int correctindex = arr[i] - 1;
                if(arr[i] != arr[correctindex]){
                    swap(arr[i], arr[correctindex]);
                }
                else{
                    return arr[i];
                }
            }
            else{
                i++;
            }
            
        
        }
        
        return -1;
        
        // USING LINKED LIST CYCLE APPROACH
        
        int slowp = nums[0];
        int fastp = nums[0];
        do{
            slowp = nums[slowp];
            fastp = nums[nums[fastp]];
        }
        while(fastp != slowp);
         
         fastp = nums[0];
        while(fastp != slowp){
            slowp = nums[slowp];
            fastp = nums[fastp];
        }
        return slowp;
        
        //HASHING
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
        
        //sorting
        int rep;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == nums[i+1]){
                rep = nums[i];
                break;
            }
        }
        return rep;
        
        
        
    }
};