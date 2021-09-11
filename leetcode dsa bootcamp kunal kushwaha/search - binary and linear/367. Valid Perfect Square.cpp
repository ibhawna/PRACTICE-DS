class Solution {
public:
    bool isPerfectSquare(int x) {
        // o(log n)
       
        int l = 1;
        int r = x;
        int mid;
        while( l <= r){
            mid = l + ( r- l)/2;
            if(x % mid == 0 and mid == x/mid){
                return true;
            }
            else if(mid > x/mid){
                r = mid-1;
            }
            else {
                l = mid + 1;
            }
        }
        return false;
        
        
        //sqrt(n)
        // using property that 
        // 1 = 1;
        // 4 = 1 + 3;
        // 9 = 1 + 3+ 5;
        // 16 = 1 + 3+ 5 + 7; etc
        int i = 1;
        while(x > 0){
            x = x - i;
            i = i + 2;
            if(x == 0){
                return true;
            }
        }
        return false;
    }
};