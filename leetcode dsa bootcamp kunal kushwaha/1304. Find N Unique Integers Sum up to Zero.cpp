// brute force basic solution
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans(n,0);
        if(n %2 == 1){//odd
            ans[n/2] = 0;
            int j = n;
            for(int i =0; i<n/2; i++){
                ans[i] = (-j);
                j--;
            }
             j = n;
            for(int i = n-1; i >n/2; i--){
                ans[i] = (j);
                j--;
            }
            
        }
        else {
            int j = n;
            for(int i = 0; i < n/2; i++){
                ans[i] = (-j);
                j--;
            }
            j = n;
            for(int i = n-1; i >= n/2; i--){
                ans[i] = j;
                j--;
            }
        }
        return ans;
    }
};