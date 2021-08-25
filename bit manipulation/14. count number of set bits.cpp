// 1.
while( n != 0){
    if(n & 1 == 1){
        count++;
    }
    n =  n>>1;
}
return count;

// 2. slightly better
while( n != 0){
    n = n & (n-1); //turning off right most set bit
    count++; 
}
return count