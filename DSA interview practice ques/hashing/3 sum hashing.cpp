for(int i=0; i <n-2; i++){
    unordered_set<int>s;
    int restSum = sum - nums[i];
    for(int j = i+1; i < n; i++){
        if(s.find(restSum - nums[j]) != s.end()){
            //print
            return true;
        }
        s.insert(nums[j]);
    }
    
}
return false;