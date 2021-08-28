// rotation by 3 deg for 90, 180 and 270 refer leetcode fir better understanding
class Solution {
public:
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        bool ans =false;
        int n = mat.size();
        if(mat == target) {     // rotation by 0 degree.
            return true;
        }
       int times = 3;
        while(times -- ){
        for(int i =0; i<n; i++){
                for(int j = i+1; j<n; j++ ){
                    swap(mat[i][j], mat[j][i]);
                }
         }
        for(int i =0; i<n; i++){
            reverse(mat[i].begin(), mat[i].end());
        }
        if(mat == target){
            ans =  true;
        }
        
    }
        
        return ans;
    }
};
// also In C++ generally == is overloaded for value comparison. A reference comparison can be done with the & operator, eg. "&mat == &target" which would be comparing if they have the same address. If mat and target were pointer types, then == would be a reference comparison and in order to do a value comparison you would need to use the * operator to dereference.
/*
 * clockwise rotate
 * first swap the symmetry (i.e. transpose the matrix), then reverse each row
 * 1 2 3     1 4 7     7 4 1
 * 4 5 6  => 2 5 8  => 8 5 2
 * 7 8 9     3 6 9     9 6 3
 * 
 * anti-clockwise rotate
 * first swap the symmetry (i.e. transpose the matrix), then reverse each col
*/