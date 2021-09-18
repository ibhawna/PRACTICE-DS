// o(n)

 int n = nums.size();
        vector<int> target;
        // using insert in built in
        for(int i = 0; i<n; i++){
            target.insert(target.begin()+index[i], nums[i]);
        }
        return target;


        // brute force
        class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> target(n,0);
        // using insert in built in
        // for(int i = 0; i<n; i++){
        //     target.insert(target.begin()+index[i], nums[i]);
        // }
        // return target;
        
        
        for(int i = 0; i<n; i++){
            if(index[i] < i and i<n){
                int j = i;
                while(j > index[i]){
                    target[j] = target[j-1];
                    j--;

                }
                
                target[index[i]] = nums[i];
            }
            else{
                target[index[i]] = nums[i];
            }
        }
        return target;
    }
};