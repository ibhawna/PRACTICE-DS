class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> sorted(arr.begin(), arr.end());
        unordered_map<int,int> mp;
        int index = 1;
        for(auto &it: sorted){
            mp[it] = index;
            index++;
        }
        for(auto &i:arr){
            i = mp[i];
        }
        return arr;
      
	
        
        
        // try brute wrong for most cases
//         vector<int> ans(arr.size());
//         for(int i =0; i < arr.size(); i++){
//             ans[i] =arr[i];
//         }
//         sort(ans.begin(), ans.end());
//         vector<int> res(arr.size());
//         for(int i=0; i < arr.size(); i++){
//             for(int j=0; j < ans.size(); j++){
//                 if(arr[i] == ans[j]){
//                     res[i] = (j + 1);
                    
//                 }
//             }
//         }
//         return res;
    }
};