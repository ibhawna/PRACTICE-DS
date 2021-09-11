class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        // unordered_map<char, int> mp;
        // for(int i=0; i<stones.length();  i++){
        //     mp[stones[i]]++;
        // }
        // int ans = 0;
        // for(int i =0; i < jewels.length(); i++){
        //     if(mp.find(jewels[i]) != mp.end()){
        //         ans = ans + mp[jewels[i]];
        //     }
        // }
        // return ans;
        
        
        // set
        // int ans = 0;
        // unordered_set<char> jewelset(jewels.begin(), jewels.end());
        // for(auto it : stones){
        //     if(jewelset.count(it)){
        //         ans++;
        //     }
        // }
        // return ans;
        
        //count std::count() returns number of occurrences of an element in a given range. Returns the number of elements in the range [first,last) that compare equal to val.
        // int count(Iterator first, Iterator last, T &val)
        int ans = 0;
        for(int i =0; i<jewels.size(); i++){
            ans += count(stones.begin(), stones.end(), jewels[i]);
        }
        return ans;
        
    }
};