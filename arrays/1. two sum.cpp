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
};  // TC = O(N)
// SC = O(N)


// SORTING

    sort(arr, arr + n);
 
    int low = 0;
    int high = n - 1;
 
   
    while (low < high)
    {
        if (arr[low] + arr[high] == sum)
        {
            cout << "Pair found (" << arr[low] << ", " << arr[high] << ")" << endl;
            return;
        }
 
        
        (arr[low] + arr[high] < sum)? low++: high--;
    }
 
    
    cout << "Pair not found";
    // O(N LOGN) - TC
    // O(1) = SC