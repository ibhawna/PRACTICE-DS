class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxacc= 0;
        
			// for(int i=0; i<accounts.size(); i++){
			// int sum=0;
			// int j=0;
			// while(j<accounts[i].size()){
			// 	sum = accounts[i][j]+sum;
			// 	j++;
			// }
			// maxacc=max(maxacc,sum);
			// }
        for(auto &it: accounts){
            maxacc = max(maxacc, accumulate(it.begin(), it.end(), 0));
        }
        
        return maxacc;
    }
};