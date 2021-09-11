class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        // binary search 1
        int l = 0;
        int h = arr.size() - 1;
      
        while(l <= h){
            int m = l + ( h - l) / 2;
            if(arr[m] < arr[m + 1]){
                l = m + 1;
            }
            else{
                h = m - 1;
            }
            
        }
        return l;
        
        // binary search 2
          int l = 0;
        int h = arr.size() - 1;
      int m;
        while(l <= h){
             m = l + ( h - l) / 2;
            if(arr[m] > arr[m +1] and arr[m] > arr[m-1]){
                return m;
            }
            else if (arr[m] < arr[m + 1]){
                l = m;
            }
            else if(arr[m] < arr[m-1]){
                h = m;
            }
            
        }
        return m;
        
        
        // o(n)
        int i = 0;
        while(arr[i] < arr[i+1]){
            i++;
        }
        return i;
       
    }
};