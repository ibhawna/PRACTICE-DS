// 1. brute force
 first sort the array and then traverse to check for missing and repeating number. O(nlogn)

 // 2. hashing
 store the numbers into hash table with their frequency. whose freq >=2 : repeating and freq = 0 : missing

 // 3. submission
 here we will use summatation property of first n natural numbers;
 x - missing
 y - repeating
 S = 1+...+n = n(n+1)/2;
 sigma sumofarray = sum of given a[i];
 S - sumofarray = ans = X - Y

 s^2 = (1^2 + 2^2 + 3^2 +...+n^2) = n(n+1)(2n+1)/6;
 squaresumofarr = a[0]^2 + a[1]^2 + ... + a[lastindex]^2;
 S^2  - sqauresumofarr = X^2 - Y^2;
 solve find x and y
 

 // 4. USING XOR PROPERTY
 let and x : missing number and y : repeating number
 calculate xor of a[i]...
 calculate xor of numbers 1 to n;
 take xor of both above xors
 finding righ most bit
 separate the numbers acc to bits in two baskets
 separate (1 to n)  in these two baskets
 xor of individual baskets, one will give x and other will give y.


 int xor1;
 int left_most_set_bit_no;
 int i ;
 int x =  0; 
 int y = 0;
 xor1 = arr[0];
 for(int i =1; i<n; i++){
     xor1 = xor1 ^ arr[i];
 }
 for(int i =1; i<=n; i++){
     xor1 = xor1 ^ i;
 }
//for right most set bits
left_most_set_bit_no = xor1 & ~(xor1 - 1);
 
