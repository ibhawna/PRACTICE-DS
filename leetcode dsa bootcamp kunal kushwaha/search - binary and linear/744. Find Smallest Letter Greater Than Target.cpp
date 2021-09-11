class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        //binary search
//         int n = letters.size();
//          if(letters[0] > target){
//             return letters[0];
//         }
//         if(target >= letters[n-1]){
//             return letters[0];
//         }
//         char ans;
//         int l = 0;
//         int h = letters.size()-1;
       
//         while(l <= h){
//             int m = l + (h-l)/2;
//             if(letters[m] <= target){
//                 l = m + 1;
//             }
//             else if(letters[m] > target){
//                 h = m - 1;
//             }
          
            
//         }
//         return letters[l];
        
        
        auto it = upper_bound(letters.begin(), letters.end(), target);
        
        if(it == letters.end()){
            return letters[0];
        }
        else{
            return *it;
        }
        
        
        //linear search
        // char ans;
        // for(int i=0; i<letters.size(); i++){
        //     if(letters[i] > target){
        //         ans =  letters[i % letters.size()];
        //         break;
        //     }
        //     if(i == letters.size() -1){
        //         return letters[0];
        //     }
        // }
        // return ans;
    }
};