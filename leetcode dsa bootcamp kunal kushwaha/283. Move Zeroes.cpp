class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int i = 0;
        int j = 0;
        while(j < arr.size()){
            if(arr[i] == 0){
                if(arr[j] == 0){
                    j++;
                }
                else{
                    swap(arr[j], arr[i]);
                    j++;
                    i++;
                }
            }
            else{
                j++;
                i++;
            }
        }
        
    }
};