class Solution {
    int rotateindex(vector<int>&a, int n){
	int l = 0;
	int h = n-1;
	if(a[l] < a[h]){ 
	//not rotated
	return 0;
	}
	while(l <= h){
	int m = l + h-l/2;
	if(a[(m-1+n) % n] > a[m]){
	return m;
	}
	if(a[(m+1)%n] < a[m]){
	return (m + 1);
	}
	else if(a[l] <= a[m]){
	l = m + 1;  //nelecting left sorted part and moving to right unsorted
	}
	else if(a[h] >= a[m]){
	h = m - 1;  //nelecting right sorted part and moving to left unsorted
	}
	}
	return  -1;
           
}
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int rotate = rotateindex(arr,n);
        sort(arr.begin(), arr.end());
        int l = 0;
        int h = n - 1;
        while(l <= h){
            int mid = l + (h-l)/2;
            if(arr[mid] == target){
                return ((mid + rotate) % (n));    
            }
            else if(arr[mid] > target){
                h = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return -1;
        
    }
};