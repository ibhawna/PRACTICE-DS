class Solution {
    int findRotationCount(vector<int> &arr, int n)
{
    // search space is `arr[low…high]`
    int low = 0, high = n - 1;
 
    // loop till the search space is exhausted
    while (low <= high)
    {
        // if the search space is already sorted, we have
        // found the minimum element (at index `low`)
        if (arr[low] <= arr[high]) {
            return low;
        }
 
        int mid = (low + high) / 2;
 
        // find the next and previous element of the `mid` element
        // (in a circular manner)
        int next = (mid + 1) % n;
        int prev = (mid - 1 + n) % n;
 
        // if the `mid` element is less than both its next and previous
        // neighbor, it is the array's minimum element
 
        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev]) {
            return mid;
        }
 
        // if `arr[mid…high]` is sorted, and `mid` is not the minimum element,
        // then the pivot element cannot be present in `arr[mid…high]`,
        // discard `arr[mid…high]` and search in the left half
 
        else if (arr[mid] <= arr[high]) {
            high = mid - 1;
        }
 
        // if `arr[low…mid]` is sorted, then the pivot element cannot be present in it;
        // discard `arr[low…mid]` and search in the right half
 
        else if (arr[mid] >= arr[low]) {
            low = mid + 1;
        }
    }
 
    // invalid input
    return -1;
}
public:
    int search(vector<int>& arr, int target) {
        //brute binary search
        int n = arr.size();
        int rotate =  findRotationCount(arr, n);
        // cout<<rotate<<endl;
        sort(arr.begin(), arr.end());
        int l = 0;
        int h = arr.size() - 1;
        // int rotate = 0;
        while(l <= h){
            int mid = l + (h-l)/2;
            if(arr[mid] == target){
                if(arr.size() == 1){
                    return mid;
                }
                else{
                    // cout<<mid<<endl;
                    // cout<<(mid + rotate) % (arr.size() )<<endl;
                    return (mid + rotate) % (arr.size() );
                }
                    
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