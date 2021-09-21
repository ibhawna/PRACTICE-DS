#include <bits/stdc++.h>
using namespace std;
int rotateindex(int a[], int n){
	int l = 0;
    int h = n-1;
    if(a[l] < a[h]){ 
        //not rotated
        return 0;
    }
    while(l <= h){
        int m = l + h-l/2;
        if(a[m-1] > a[m]){
            return m;
        }
        if(a[m+1] < a[m]){
            return m + 1;
        }
        else if(a[l] <= a[m]){
            l = m + 1;  //nelecting left sorted part and moving to right unsorted
        }
        else if(a[h] >= a[m]){
            h = m - 1;  //nelecting right sorted part and moving to left unsorted
        }
    }
	return -1;
}
int main(){
    int a[] = { 3, 4, 5, 6,7, 0,1, 2};
    int n = sizeof(a) / sizeof(a[0]);
	int rotate = rotateindex(a,n);
	cout<<rotate<<endl;
	
}