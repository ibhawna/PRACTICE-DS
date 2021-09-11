class Solution {
    int search(vector<int> nums){
        
        //o( m log (n))
            int start = 0;
            int end = nums.size() - 1;
            int index = -1;
            sort(nums.begin(), nums.end());
            while(start <= end){
                int mid = start + (end - start)/2;
                if(nums[mid] < 0){
                    index = mid;
                    start = mid + 1;
                }
                else if(nums[mid] >= 0){
                    end = mid - 1;
                }
            
            }
            return index + 1;
        }
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        int m = grid.size(); //rows
        int n = grid[0].size(); //cols
        int i = m-1;
        int j = 0;
        while( i >=0 and j < n){
            if(grid[i][j] < 0){
                i--;
                count = count + n - j; /// kyoki agar yeh walla number negative h toh us row ke har column main sabhi negative as numbers are decreasing. 
            }
            else{
                ++j;
            }
        }
        return count;
        
        // binary search
        int count = 0;
        int m = grid.size(); //rows
        int n = grid[0].size(); //cols
        for(int i = 0; i < m; i++){
            count = count + search(grid[i]);
        }
        return count;
        
        //o(m+n)
        //try
        int count = 0;
        int m = grid.size(); //rows
        int n = grid[0].size(); //cols
        int i = m-1;
        int j = 0;
        int k = 0;
        while( j < n){
            if(grid[i][j] < 0){
                count++;
                i--;
                if(i < 0){
                    i = m - 1;
                    j = ++k;
                }
            }
            else if(grid[i][j] >= 0) {
                i = m-1;
                j = ++k;
                
            }

        }
        return count;
        
       
        
        brute force
        for(int i = 0; i < m;  i++){
            for(int j = 0;  j<n; j++){
                if(grid[i][j]<0){
                    count++;
                }
            }
        }
        return count;
        
     
    }
};