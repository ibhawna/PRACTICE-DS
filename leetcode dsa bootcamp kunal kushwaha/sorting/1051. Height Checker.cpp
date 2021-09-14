class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> heightmp(101);
        for(auto h: heights){
            heightmp[h]++;
        }
        int ans =0;
        int currheight = 0;
        for(int i=0; i < heights.size(); i++){
            while(heightmp[currheight] == 0){
                currheight++;
            }
            if(currheight != heights[i]){
                ans++;
            }
            heightmp[currheight]-- ;
        }
        return ans;
        
        
        
        //brute
        // vector<int> dup(heights.size(),0);
        // for(int i =0; i < heights.size(); i++){
        //     dup[i] = heights[i];
        // }
        // sort(dup.begin(), dup.end());
        // int ans =0;
        // for(int i=0; i < heights.size(); i++){
        //     if(dup[i] != heights[i]){
        //         ans++;
        //     }
        // }
        // return ans;
        
        
        
        //wrong
        // int i =0;
        // int j = 1;
        // int ans =0;
        // while(j < heights.size()){
        //     if(heights[i] > heights[j]){
        //         swap(heights[i], heights[j]);
        //         ans++;
        //     }
        //     i++;
        //     j++;
        // }
        // if(ans == heights.size()-1){
        //     return ans+1;
        // }
        // return ans;
    }
};