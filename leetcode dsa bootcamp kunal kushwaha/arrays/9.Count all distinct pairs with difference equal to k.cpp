// 1. loops o(n^2) loops

//binary search
int BS(arr, int l, int h, int x){
    if(l <= h){
        int mid
        if(x == a[mid]){
            return mid;
        }
        else if(x > a[mid]){
            BS(arr, mid+1, h, x);
        }
        else{
            bs(arr, l, mid - 1, x);
        }
    }
}
sort(arr, arr+n);
int count = 0;
for(int i =0; i <n; i++){
    if(BS(arr, i+1, n-1, arr[i] + k) != -1){
        count++;
    }
}
return count;
// using  hashing
int count = 0 
bool hashmap[MAX] = {false};
for(int i=0; i <n; i++){
    hashmap[arr[i]] = true;
}
for(int i=0; i < n; i++){
    if(arr[i] - diff >= 0 and hashmap [arr[i] - diff]){
        count++;
    }
    if(arr[i] + diff < MAX and hashmap[arr[i] + diff]){
        count++;
    }
    hashmap[arr[i]] = false;
}
return count;


int count =0;
unordered<int, int> mp;
for(int i=0;i <n; i++){
    if(mp.find(arr[i] - diff) != mp.end()){
        count += mp[arr[i] - diff];
    }
    if(mp.find(arr[i] + diff) != mp.end()){
        count += mp[arr[i] + diff];
    }
    mp[arr[i]] = i;
}
return count;