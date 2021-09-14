class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        //brute force
        // unordered_map<int,int> mp;
        // for(int i=0;i <arr1.size();i++){
        //     mp[arr1[i]]++;
        // }
        // vector<int> ans;
        // for(int i = 0; i < arr2.size(); i++){
        //     for(int j =0 ; j<mp[arr2[i]]; j++){
        //         ans.push_back(arr2[i]);
        //     }
        //     mp[arr2[i]] = 0;
        // }
        // for(int i=0;i<=1000;i++){
        //     for(int j=0;j<mp[i];j++){
        //         ans.push_back(i);
        //     }
        // }
        // return ans;
        
        
         map<int,int> mp;
        for(auto& i:arr1)mp[i]++;
        vector<int> v;
        for(auto& i:arr2){
            if(mp.count(i)){
                int n=mp[i];
                while(n--)v.push_back(i);
                mp.erase(i);
            }
        }
        for(auto& i:mp){
            int n=i.second;
            while(n--)v.push_back(i.first);
        }
        return v;
        
        
        // int k =0;
        // for(int i =0; i < arr2.size(); i++){
        //     for(int j =0; j < arr1.size(); j++){
        //         if(arr1[j] == arr2[i]){
        //             swap(arr1[k], arr1[j]);
        //             k++;
        //         }
        //     }
        // }
        // sort(arr1.begin() + k, arr1.end());
        // return arr1;
    }
};