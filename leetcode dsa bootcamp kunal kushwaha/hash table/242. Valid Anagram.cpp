class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s == t;
        
        // int alphabet[26] = {0};
        // if(s.length() != t.length()){
        //     return false;
        // }
        // for(int i=0; i < s.length(); i++){
        //     alphabet[s[i] - 'a']++;
        //     alphabet[t[i] - 'a']--;
        // }
        // for(int i=0; i <26; i++){
        //     if(alphabet[i] != 0){
        //         return false;
        //     }
        // }
        // return true;
        
        unordered_map<char, int> mp;
        if(s.length() != t.length()){
            return false;
        }
        for(int i =0; i < s.length(); i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for(auto i = mp.begin(); i != mp.end(); i++){
            if(i->second){
                return false;
            }
        }
        return true;
    }
};

Hash tables do some complex math in that one operation to get to the value that you want. Simulating a hash table with an array is quicker because that one operation for a lookup is only an offset from the beginning of the array(since you already have the index) vs more difficult mathy stuff with the hash table.