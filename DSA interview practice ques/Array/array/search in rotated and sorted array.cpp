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



//without sorting binary search
find pivot i.e position of maximum element using pivot and then again apply binary search and decrease search space on the basis of the target andd a[0]

int findPivot(int arr[], int low, int high)
{
    // base cases
    if (high < low)
        return -1;
    if (high == low)
        return low;
 
    int mid = (low + high) / 2; /*low + (high - low)/2;*/
    if (mid < high && arr[mid] > arr[mid + 1])
        return mid;
 
    if (mid > low && arr[mid] < arr[mid - 1])
        return (mid - 1);
 
    if (arr[low] >= arr[mid])
        return findPivot(arr, low, mid - 1);
 
    return findPivot(arr, mid + 1, high);
}
 
 int pivotedBinarySearch(int arr[], int n, int key)
{
    int pivot = findPivot(arr, 0, n - 1);
 
    // If we didn't find a pivot,
    // then array is not rotated at all
    if (pivot == -1)
        return binarySearch(arr, 0, n - 1, key);
 
    // If we found a pivot, then first compare with pivot
    // and then search in two subarrays around pivot
    if (arr[pivot] == key)
        return pivot;
 
    if (arr[0] <= key)
        return binarySearch(arr, 0, pivot - 1, key);
 
    return binarySearch(arr, pivot + 1, n - 1, key);
}


//improved binary search
int l = 0;
int h = n- 1;
while( l<=h){
	int m = l + h - l/2;
	if(a[m] == target){
		return m;
	}
	if(a[l] <= a[m]){ //sorted sub array
		if(target >= a[l] and target <= a[m]{
			h = m - 1;
			}
		else {
			l = m+1;
		}	
	}
	else{
		if(target <= a[h] and target >= a[m]){
			l = m+1;
		}
		else{
			h = m - 1;
		}
	}
	