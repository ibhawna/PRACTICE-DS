// int sum = 0;
        // for(int  i =0; i<nums.size(); i++){
        //     sum = sum +nums[i];
        //     nums[i] = sum;
        // }
        partial_sum(begin(nums), end(nums), begin(nums));
        return nums;