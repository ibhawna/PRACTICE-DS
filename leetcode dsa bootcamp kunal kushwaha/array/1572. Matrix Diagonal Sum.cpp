//o(n) time complexity solution
 int n = mat.size();
        int sum = 0;
        for(int i = 0; i<n; i++){
            if( i != (n-i-1)){ //when n is even they won't become same
                sum += mat[i][i] + mat[i][n-i-1];
            }
            else{ //case when n is odd and one block is repeat
                sum += mat[i][i];
            }
        }
        
        return sum;



// brute force
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;
        for(int i =0 ; i<n; i++){
            for(int  j = 0; j<n; j++){
                if(i == j){
                    sum = sum + mat[i][j];
                }
            }
        }
        cout<<sum<<endl;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(i+j == (n-1)){
                    sum = sum + mat[i][j];
                }
            }
        }
        if(n % 2 == 0){//even
            return sum;
        }
        else{
            return sum - mat[n/2][n/2];
        }
    }
};

