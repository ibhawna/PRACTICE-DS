n = n & (n-1)

// intution :
if n = 13 => 1101
then n-1 = 12 => 1100

every power of 2 number (2,4,8,16,..) = (10, 100, 1000, 10000,....)
so a number just before a power of 2 => ( 1, 3, 7, 15,...) =>
( 1, 11, 111, 1111, ...)

so when we take and of both conitnous number => the set bit will become zero. 