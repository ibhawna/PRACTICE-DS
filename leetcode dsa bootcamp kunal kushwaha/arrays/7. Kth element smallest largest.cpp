sort the arrays as required ASC OR DESC  and return kth smallest or largest element  --> o(n logn)

using set and advcance (STL) --> O(N)
set<int> s(nums.begin(), nums.end());
int k //given
set<int> ::iterator it = s.begin();
advance(it, k - 1); // it will point to kth element in set

using map _std
count frequency of the elements
int count = 0;
map<int, int> mp;
for(int i =0; i < n; i++){
    m[nums[i]] ++;
}
for(int it = mp.begin(); it != mp.end(); it++){
    if(count >= k){
        return it->first;
    }
}