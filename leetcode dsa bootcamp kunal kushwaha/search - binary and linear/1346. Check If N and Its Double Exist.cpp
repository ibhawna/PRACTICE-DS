class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
         int countzero = 0;
        for( int i = 0; i < arr.size(); i++){
                if(arr[i] == 0){
                    countzero++;
                    if(countzero == 2){
                        return true;
                    }
                }
        }
       
        for( int i = 0; i < arr.size(); i++){
            for(int j = 0; j < arr.size(); j++){
                if(arr[j] != 0 and arr[i] == 2 * arr[j]){
                    return true;
                }
            }
        }
        return false;
    }
};