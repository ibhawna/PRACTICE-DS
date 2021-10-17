// using set
unordered_set<int>s;
for(int i =0; i <n; i++){
    sum += arr[i];
    if(sum == 0 and s.find(sum) != s.end()){
        return true;
    }
    s.insert(sum);
}

