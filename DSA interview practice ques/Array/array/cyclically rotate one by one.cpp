//1
int temp = a[n-1];
for(int i = n -1; i>=0 ;i --){
    a[i] = a[i-1];
}
a[0] = temp;

//2
int i =0;
int j = n - 1;
while( i != j){
    swap(a[i], a[j]);
    i++;
}