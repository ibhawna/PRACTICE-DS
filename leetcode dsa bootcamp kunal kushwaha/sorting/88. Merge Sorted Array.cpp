class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while( i >= 0  and j >= 0){
            if(nums1[i] >= nums2[j]){
                nums1[k] = nums1[i];
                k--;
                i--;
            }
            else{
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }
        while( j >= 0){
            nums1[j] = nums2[j];
            j--;
        }
        
        // for(int i = m; i < m+n; i++){
        //     nums1[i] = nums2[i- (m)];
        // }
        // for(auto it: nums1){
        //     cout<<it<<" ";
        // }
        // sort(nums1.begin(), nums1.end());
    }
};