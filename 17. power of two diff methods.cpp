
    bool isPowerOfTwo(int n) {
        // bit manipulation
        if(n == 0){
            return false;
        }
        if(n > 0){
            if( (n & (n-1)) != 0){
            return false;
        }
        else{
            return true;
        }
            
        }
        else{
            return false;
        }
    }

unsigned int v; // we want to see if v is a power of 2
bool f;         // the result goes here 

f = (v & (v - 1)) == 0;
// Note that 0 is incorrectly considered a power of 2 here. To remedy this, use:
f = v && !(v & (v - 1));


        
         bool isPowerOfTwo(int n) {
        // recursion
    if( n ==1){
        return true;
    }
    if(n <= 0){
        return false;
    }
    if(n%2 != 0){
        return false;
    }
    return isPowerOfTwo(n/2);
        
    }
    }
    //iterative 
    if(n<=0){
        false;
    }
    while ( n%2 == 0){
        n = n/2;
    }
    if( n == 1){
        return true;
    }
    else{
        return false;
    }

// math derivation : taken from the leetcode discussion
max power possible (int , positive) : 2^30
if(n > 0 &&  2^30 % n == 0){
    return true;
}
else {
    false;
}
    
