// Subarray with given sum
// 1. brute force approach
//  two loops and calculate all possible subsets sums and returning the required ans

// 2. using two pointers
int sum =0;
int tagret  = k;// given
int firstpointer = 0;
int secondpointer = 0;
for(int i =0; i<n; i++){
    sum += arr[i];
    if(sum == k){
        cout<<firstpointer<<" "<<secondpointer<<endl;
    }
    else if(sum < k){
        secondpointer++;
    }
    else if(sum > k){
        sum - arr[firstpointer];
        firstpointer++;
    }
}

// when negative values are allowed as well
// make a map and do same as zero sum.
unordered_map<int, int> mp;
int sum = 0;
for(int i =0; i<n; i++){
    sum += arr[i];
    if(sum == k){
        cout<<"index are "<<0<<" "<<i<<endl;
    }
    if(mp.find(sum - k) != mp.end()){
        cout<<mp[sum-k] + 1<< " "<<i<<endl;
    }
    mp[sum] = i;
}