class Solution {
public:
    int maximumProduct(vector<int>& nums) {
       
        sort(nums.begin(), nums.end());
        int p1 = 1;
        int p2 =1;
        int ans;
        int n =nums.size() - 1;
        p1 = nums[n] * nums[n-1] * nums[n-2];
        p2 = nums[n] * nums[0] * nums[1];
        ans = max(p1, p2);
        return ans;

        //brute force for limited constraints
        // int p=1;
        // sort(nums.begin(), nums.end());
        // int maxp = INT_MIN;
        // for(int i=0; i<nums.size()-2; i++){
        //     for(int j=i+1; j<nums.size()-1; j++){
        //         for(int k=j+1; k<nums.size(); k++){
        //             p = (nums[i] * nums[j] * nums[k]);
        //             maxp = max(p, maxp);
        //         }
        //     }
        // }
        // return maxp;
    }
};
//leetcode desc
class Solution {
public:
	int maximumProduct(vector<int>& nums) {
		int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
		int min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX;
		for(int i = 0; i < nums.size(); i++){
			if(nums[i] <= min1){
				min2 = min1;
				min1 = nums[i];
			} 
			else if(nums[i] <= min2){
				min2 = nums[i];
			}
			if(nums[i] >= max1){ 
				max3 = max2;
				max2 = max1;
				max1 = nums[i];
			} 
			else if(nums[i] >= max2){
				max3 = max2;
				max2 = nums[i];
			} 
			else if(nums[i] >= max3){
				max3 = nums[i];
			}
		}
		return max(min1 * min2 * max1, max1 * max2 * max3);
	}
};