// using set in o(n) space and time

set<int> s;
int rep = arr[0];
for(int i = n-1; i >= 0; i -- ){
    if(s.find(a[i]) != s.end()){
        rep = arr[i];
    }
    else{
        s.insert(a[i]);
    }
}
return rep;