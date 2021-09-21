
#include <bits/stdc++.h>
using namespace std;

//using sum  --> basically this

// int getMissingNo(int a[] ,
//                  int n)
// {
//   int n_elements_sum = n * (n + 1) / 2 ;
//   int sum = 0;
 
//   for(int i = 0; i < n - 1; i++)
//     sum += a[i];
//   return n_elements_sum-sum;
// }
// -->
int find_missing(const vector<int>& input) {
  // calculate sum of all elements 
  // in input vector
  auto sum_of_elements = std::accumulate(
    input.begin(), input.end(), 0);
  // There is exactly 1 number missing 
  int n = input.size() + 1;
  int actual_sum = (n * ( n + 1 ) ) / 2;
  return actual_sum - sum_of_elements;
}

void test(int n) {
  int missing_element = rand() % n + 1;
  vector<int> v;
  for (int i = 1; i <= n; ++i) {
    if (i == missing_element) {
      continue;
    }
    v.push_back(i);
  }
  int actual_missing = find_missing(v);
  cout << "Expected Missing = " << missing_element << " Actual Missing = " << actual_missing << endl;
}

int main() {
  srand (time(NULL));
  for (int i = 1; i < 10; ++i)
    test(100000);

  return 0;
}


// using XOR
int getMissingNo(int a[], int n)
{
    // For xor of all the elements in array
    int x1 = a[0];
 
    // For xor of all the elements from 1 to n+1
    int x2 = 1;
 
    for (int i = 1; i < n; i++)
        x1 = x1 ^ a[i];
 
    for (int i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;
 
    return (x1 ^ x2);
}

//using cycylic sort
 // this is for range [0,n], change according to ques
        
        int i =0;
        int n= arr.size();
        int ans = n;
        while((i < n)){
            int correctindex = arr[i];
            if(arr[i] == n){
                i++;
            }
            else if(arr[i] != arr[correctindex]){
                swap(arr[i], arr[correctindex]);
            }
            
            // move forward when when arr[i] == n
            else{
                i++;
            }
        }
        for( i = 0; i<n; i++){
            if(arr[i] != i){
                ans = i;
            }
        }
    return ans;
