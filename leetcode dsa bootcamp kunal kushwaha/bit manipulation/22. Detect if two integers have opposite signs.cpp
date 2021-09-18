
// 1.
bool oppositeSigns(int x, int y)
{
    return ((x ^ y) < 0);
}

// 2.
bool oppositeSigns(int x, int y){
    return (x^y)>> 31 ;
}
The function is written only for compilers where size of an integer is 32 bit.