// 1. count number of zeroes and ones individualyy (o(n)) and then sort them with help of loop

// 2. 
int l = 0; int r = n-1;
while(l<r){
    if(arr[r] == 0){
        swap(A[l], a[r]);
        l++;
    }
    else if(arr[r]  ==  1){
        r--;
    }
}


// 3.
int k =0;
for(int i =0;i <n; i++ ){
    if(arr[i]  == 0){
        a[k] =1;
        k++;
    }
}
for(int i =k i<n; i++){
    a[i] =1;
}

