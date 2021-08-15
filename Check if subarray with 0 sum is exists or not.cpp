//  recursion
arr = [4,2,-3,1,6]
sum = 0;
 i =0;
 n = size of arr;
int checksubarray(int i ,int arr[], vector<int> ds, sum){
    if(sum ==0){
        return ds;
    }
    if( i == n ){
        return;
    
    }
    ds.push_back(arr[i]);
    sum+arr[i]
    checksubarray(i+1, arr, ds, sum);
    ds.pop_back();
    
    ds.push_back(i+1, arr, ds, sum)


}

// hashing
bool checksum(int arr, int n){
    unordered_set<int> sumset;
    int sum = 0;
    sumset.insert(0);
    for(int i =0; i<n; i++){
        sum += arr[i];
        if(sum == 0 || sumset.find(sum) != sumset.end()){
            return true;
        }
        else{
            sumset.insert(sum);
        }
        

    }
    return false;
}

// how to print such subarrays
// 1. in o(n^2) time, storing subarray sum in constant time
sum = 0;
for(int i =0; i<n ; i++){
    for(int j = i; j<n; j++){
        sum+=arr[j];
        if(Sum == 0 ){
            cout<<i<<" "<<j<<endl;
        }

    }
}

// to print using multimap
#include <iostream>
#include <unordered_map>
using namespace std;
 
// Function to print all subarrays with a zero-sum in a given array
void printAllSubarrays(int arr[], int n)
{
    // create an empty multimap to store the ending index of all
    // subarrays having the same sum
    unordered_multimap<int, int> map;
 
    // insert `(0, -1)` pair into the map to handle the case when
    // subarray with zero-sum starts from index 0
    map.insert(pair<int, int>(0, -1));
 
    int sum = 0;
 
    // traverse the given array
    for (int i = 0; i < n; i++)
    {
        // sum of elements so far
        sum += arr[i];
 
        // if the sum is seen before, there exists at least one
        // subarray with zero-sum
        if (map.find(sum) != map.end())
        {
            auto it = map.find(sum);
 
            // find all subarrays with the same sum
            while (it != map.end() && it->first == sum)
            {
                cout << "Subarray [" << it->second + 1 << "…" << i << "]\n";
                it++;
            }
        }
 
        // insert (sum so far, current index) pair into multimap
        map.insert(pair<int, int>(sum, i));
    }
}
 
int main()
{
    int arr[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    printAllSubarrays(arr, n);
 
    return 0;
}



