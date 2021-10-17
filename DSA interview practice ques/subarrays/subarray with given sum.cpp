// given : array anf a sum. print sub array with given sum

// naive approach --> using loops , traversing every possible n(n-1)/2 subarrays. 

// using two pointers, right and left and maintaining a currentSum
int currentSum =0;
int l = 0;
int r = 0;
while(l <= r){
    currentSum += arr[r];
    if(currentSum == givenSum){
        //store the index l and r and print the subarray in diff loop
        return true;
    }
    else if(currentSum < givenSum){
        r++;
    }
    else if(currentSum > givenSum){
        l++;
    }
}