//iterative two pointers  o(n)
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(a) / sizeof(a[0]);
	int l = 0;
    int h = n-1;
    while(l < h){
        swap(a[l], a[h]);
        l++;
        h--;
    }  
	for (int i = 0; i < n; i++){
        cout << a[i] << " "
        }
	
	return 0;
}

// recursive two pointers

#include <bits/stdc++.h>
using namespace std;
void revarr(int a[], int l, int h){
    if(l >= h){
        return;
    }
    swap(a[l], a[h]);
    revarr(a, l+1, h-1);
}
int main()
{
	int a[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(a) / sizeof(a[0]);
	revarr(a,0,n-1);
	for (int i = 0; i < n; i++){
        cout << a[i] << " ";
        }
	
	return 0;
}