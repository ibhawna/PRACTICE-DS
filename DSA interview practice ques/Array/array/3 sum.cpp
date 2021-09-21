// brute o(n^3)
bool threenumbers(int A[], int n, int sum)
{
    int l, r;
 
    // Fix the first element as A[i]
    for (int i = 0; i < n - 2; i++)
    {
 
        // Fix the second element as A[j]
        for (int j = i + 1; j < n - 1; j++)
        {
 
            // Now look for the third number
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == sum)
                {
                    cout << nums[i] <<
                        ", " << nums[j] << ", " << nums[k];
                    return true;
                }
            }
        }
    }



    //two pointers
    sort(nums.begin(), nums.end());
    for(int i=0; i < n - 2; i++){
        l = i+1;
        r = n-1;
        while(l < r){
            if(nums[i] + nums[l] + nums[r] == sum){
                //print
                return true;
            }
            else if(nums[i] + nums[l] + nums[r] < sum){
                l++;
            }
            else{
                r--;
            }
        }
    }
    return false;
    

    //leetcode solution for leetcode problem  3 sum
    class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // two pointer
        
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i<n; i++){
            if(i > 0 and nums[i] == nums[i-1]){
                continue;
            }
            int l = i + 1;
            int r = n - 1;
            while( l < r){
                int sum = nums[i] + nums[l] + nums[r];
                if(sum < 0){
                    l++;
                }
                else if(sum > 0){
                    r--;
                }
                else{
                    ans.push_back(vector<int>{nums[i], nums[l], nums[r]});
                    while(l<r and nums[l] == nums[l+1]){
                        l++;
                    }
                    while(l<r and nums[r] == nums[r-1]){
                        r--;
                    }
                    l++;
                    r--;
                }
            }
        }
        return ans;
    }
};