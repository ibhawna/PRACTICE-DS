class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        int m = nums1.size();
        int n = nums2.size();
        vector<int> ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        while( i < m and j < n){
            if(nums1[i] == nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]){
                i++;
            }
            else{
                j++;
            }
            
        }
        
        return ans;
    }
};
// hashing
unordered_map<int, int> mp;
        vector<int> ans;
        for(int i =0; i<nums1.size(); i++){
            mp[nums1[i]]++;
        }
        for(int i = 0; i<nums2.size(); i++){
            if(--mp[nums2[i]] >= 0){
                ans.push_back(nums2[i]);
                
            }
        }
        return ans;

        //hashing
         unordered_map<int, int> mp;
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++){
            mp[nums1[i]]++;
        }
        for(int i = 0; i < nums2.size(); i++){
            if(mp.find(nums2[i]) != mp.end() and (--mp[nums2[i]] ) >= 0){
                ans.push_back(nums2[i]);
            }
        }
            
        return ans;
        



// If nums1 and nums2 are already sorted, we always go for the two pointers to eliminate the need for extra space (hash map).
If nums1 and nums2 are not already sorted, we always go for the hashmap to avoid the larger time complexity of sorting.