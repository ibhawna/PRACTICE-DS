#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, -4, -1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
	int i =0;
	int j = n - 1;
	while( i != j){
		if(arr[i] >= 0 ){
			i++;
		}
		else if(arr[i] < 0){
			swap(arr[i], arr[j]);
			j--;
		}
	}
	i = 1;
	j = n - 1;
	while(arr[j] < 0){
		swap(arr[i], arr[j]);
		i += 2;
		j--;
	}
	for(i =0; i <n; i++){
		cout<<arr[i]<<", ";
	}
    return 0;
}