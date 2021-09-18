class Solution {
    void rotateone(vector<int> &arr, int n){
        int temp  = arr[n-1];
        for(int i = n-1; i >=1; i--){
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
    }
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        k = k % n;
        // reverse(nums.begin(), nums.begin() + n - k );
        // reverse(nums.begin() + n - k, nums.end());
        // reverse(nums.begin(), nums.end());
        
        
        // rotate one by one
        for(int i = 0; i < k; i++){
            rotateone(nums,n);
        }
        
    }
};