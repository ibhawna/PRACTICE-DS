// loops o(n^2)
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arr[] = { 1, 0, 0, 1, 0, 1, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k=1;
	int zero = 0;
	int one = 0;
	for(int i =0; i < n; i ++){
		for(int j = i; j < n; j++){
			if(arr[j] == 0){
				zero++;
			}
			else if(arr[j] == 1){
				one++;
			}
			if(zero == one){
				
				cout<<"pair "<<k<<" : "<<i<<" , "<<j<<endl;
				++k;
				
			}
		}
	}
	cout<<k-1<<endl;

	return 0;
}
