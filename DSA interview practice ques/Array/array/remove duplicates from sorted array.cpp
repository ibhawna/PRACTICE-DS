//two pointers
//basically when we encounter the duplicate element, we replcae it with larger element so after sorting, we get distinct elemnts in front
//leetcode probelm solution
//o(nlogn)
        
      class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1;
        int dup =0;
        while(j<nums.size())
        {
           if(nums[i]==nums[j])
           {
                dup++;
                nums[j]=INT_MAX;
                j++;
           }
            else
            {
                i=j;
                j++;
            }
        }
        sort(nums.begin(),nums.end());
        return (nums.size()-dup);
        

        ///another method
        int left =0;
        
        for(int right = 1; right < nums.size(); right++){
            if(nums[left] != nums[right]){
                left++;
                nums[left] = nums[right];
            }
            
        }
        return left+1;
        // int dup =0;
        // for(int i= 1; i < nums.size(); i++){
        //     if(nums[i] == nums[i-1]){
        //         dup++;
        //     }
        //     else{
        //         nums[i-dup] = nums[i];
        //     }
        // }
        // return nums.size() - dup;
    }
};