//brute o(n^2) approach

int maxwater = 0;
for(int i=0; i < nums.size() ; i++){
    for(int j = i+1; j < nums.size(); j++){
        maxwater = max(maxwater, min(nums[i], nums[j]) * ( j - i));
    }
    
}
return maxarea;

// o(n) approach two pointers
int l = 0;
int r = n- 1;
int area = 0;
while(l < r){
    area = max(area, min(nums[i], nums[j]) * (j - i));
    if(nums[l] < nums[j]){
        l++;
    }
    else{
        r--;
    }
 }
 return area;