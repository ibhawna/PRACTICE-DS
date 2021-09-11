// set

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        set<int> st(nums.begin(), nums.end());
        auto it = st.end();
        if(st.size() < 3){
            advance(it, -1);
            return *it;
        }
        advance(it, -3);
        return *it;
    }
};