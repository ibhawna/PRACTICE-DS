class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& images) {
        int n = images.size();
        
        // reverse
        for(int i = 0; i<n; i++){
            int start = 0;
            int end = n-1;
            while(start <= end){
                swap(images[i][start], images[i][end]);
                    start++;
                    end--;
                
            }
            //invert
            for(int j = 0; j<n; j++){
                if(images[i][j] == 0){
                    images[i][j] = 1;
                }
                else if(images[i][j] == 1){
                    images[i][j] = 0;
                }
            }
        }
        
        
        return images;
        
    }
};

// shorter

        for(auto& it : images){
            reverse(it.begin(), it.end()); // matrix
            for(auto& j : it){
                j = j^1; //toggle
            }
        }
        return images;