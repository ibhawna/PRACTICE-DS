class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // int ans = 0;
        // int cookies = s.size();
        // int kids = g.size();
        // for(int i =0; i < kids; i++){
        //     for(int j = 0; j < cookies; j++){
        //         if(s[j] >= g[i]){
        //             ans ++;
        //             break;
        //         }
        //     }
        // }
        // return ans;
       
        
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i=0; //children
        int j=0;
        while(i<g.size() and j<s.size()){
            if(s[j] >= g[i]){
                i++;
            }
            j++;
        }
        return i;
    }
};