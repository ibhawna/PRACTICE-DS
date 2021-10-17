//using sorting and using another array
//constraints : 0 <= size <= 10^5
// -10^9 <= nums[i] <= 10^9
if(nums.size() == 0){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int res =0;
        int ans = 0;
        vector<int> dup;
        dup.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1]){
                dup.push_back(nums[i]);
            }
        }
        for(int i=0; i < dup.size(); i++){
            if(i > 0 and dup[i] == dup[i-1] + 1){
                ans++;
            }
            else {
                ans = 1;
            }
            res = max(res, ans);
        }
        return res;
        
		}




// this can handle all cases except negative cases
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> nums{1};
	if(nums.size() == 0){
		cout<<"0"<<endl;
		return 0;
	}
	int mx = INT_MIN;
	for(int i=0; i < nums.size(); i++){
		mx = max(nums[i], mx);
	}
	cout<<mx<<endl;
	
	int mn = INT_MAX;
	for(int i=0; i < nums.size(); i++){
		mn = min(nums[i], mn);
	}
	cout<<mn<<endl;
	
	int n = mx+1;
	vector<int> arr(n, 0);
	
	for(int i=0; i<nums.size(); i++){
		int a = nums[i];
		arr[a] = 1;
	}
	
	int res = -1;
	int ans =0;
	
	for(int i = mn; i < n; i++){
		if(arr[i] == 0){
			ans = 0;
		}
		else if(arr[i] == 1){
			ans++;
		}
		res = max(res, ans);
	}
	
	cout<<res<<endl;
	return 0;
	
}
