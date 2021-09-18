// from leetcode description
// Only numbers between 10 and 99 or 1000 and 9999 or 100000 have even number of digits.
// Taking advantage of nums[i] <= 10^5

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n,count=0;
        for(int i=0;i<nums.size();i++)
        {
            n=nums[i];
            if(( 10<=n && n<=99) || (1000<=n && n<=9999 ) || ( n==100000 ))
            {
               count++;
            }
        }
        return count;
    }
};

// brute
class Solution {
public:
    int digits(int n){
            // if(n/10 == 0){
            //     return 1;
            // }
            // return 1+digits(n/10); 
        return floor(log10(n) + 1);
       
        }
    int findNumbers(vector<int>& nums) {
        int count = 0;
        // brute force
        for(int i = 0; i<nums.size(); i++){
            if(digits(nums[i]) % 2 == 0){
                count++;
            }
        }
        return count;
    }
};

