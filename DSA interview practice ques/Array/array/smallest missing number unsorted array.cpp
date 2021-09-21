class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        int i =0;
        int n = arr.size();
        while(i < arr.size()){
           
            if( arr[i] > 0 and arr[i] <= n and arr[i] != arr[arr[i]-1] ) {
                swap( arr[i], arr[arr[i]-1] ) ;
            }
                
            
            else{
                i++;
            }
        }
        for(int i = 0; i<n; i++){
            if(arr[i] != i+1){
                return i+1;
            }
        }
        
        return n+1;
    
    }
};