class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st(nums1.begin(), nums1.end());
        vector<int>ans;
        for (auto it : nums2){
            if (st.count(it)) {
                ans.push_back(it);
                st.erase(it);
            }
        }
        return ans;
        // two pointer
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
            while(j > 0 and j < n and nums2[j] == nums2[j-1]){
                j++;
            }
            while(i > 0 and i < m and nums1[i] == nums1[i-1]){
                i++;
            } // these while conditions are for skipping the same number that has already been pushed into ans. 
        }
        
        return ans;
    }
};