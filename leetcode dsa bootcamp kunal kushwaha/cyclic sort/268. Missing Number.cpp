class Solution {
public:
    int missingNumber(vector<int>& arr) {
        // int n = nums.size();
        // int sum = ((n+1)*n )/2;
        // int arraysum = 0;
        // for(int i =0; i<n; i++){
        //     arraysum +=nums[i];
        // }
        // return sum - arraysum;
        
        // using cyclic sort as the numbers are in range [0,n]
        
        int i =0;
        int n= arr.size();
       
        while((i < n)){
            int correctindex = arr[i];
            
            if(arr[i] < n and arr[i] != arr[correctindex]){
                swap(arr[i], arr[correctindex]);
            }
            
            // move forward when when arr[i] == n
            else{
                i++;
            }
        }
        for( i = 0; i<n; i++){
            if(arr[i] != i){
                return i;
            }
        }
    return n;
    }
};