class Solution {
public:
    double myPow(double x, int n) {
        // optimal solution o(log n)
        long long n1 = n;
        if(n1 < 0){
            n1 = (-1) * n1;
            x = 1/x;
        }
        if(x == 0){
            return 0;
        }
        if(x == 1){
            return 1;
        }
        if(n1 == 0){
            return 1;
        }
        double power = myPow(x, n1/2);
        if(n1 & 1 ){
            return x * power * power;
        }
        return power* power;
        
        
    
            
        
        // not applied to all constraints naive recursion
        // if( n < 0 ){
        //     n = (-1) * n;
        //     x = 1/ x;
        // }
        // if(n == 0){
        //         return 1;
        // }
        // if(n == 1){
        //         return x;
        // }
        //  else{
        //         return ( x * myPow(x, n-1));
        //  }
        
       

    
    }
};