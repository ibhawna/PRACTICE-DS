// rotate by using temp array  -- o(1) space + o(n) time

// rotate one by one, keep the order of rotation in mind. //time complexity = o(n * k) --> k == no. of rotations. space = o(1)

//reversing rotation
/*   
    --> ques : rotate by k numbers from end
    rotate(arr, n, k){
        reverse(arr,0,n-k-1);  // ie from 0 to n-k-1
        reverse(arr, n-k, n-1) // ie from n-k to n-1
        reverse(arr, 0, n-1);
    }

    --> rotate by k numbers from starting
    rotate(arr, n, k){
        reverse(arr,0,k);  // ie from 1 to n-k-1
        reverse(arr, k, n-1) // ie from n-k to n-1
        reverse(arr, 0, n-1);
    }

*/

