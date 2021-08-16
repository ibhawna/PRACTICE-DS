#include<bits/stdc++.h>
using namespace std;
vector<int> brutesol(vector<int> nums){
    for(int i =0; i<nums.size(); i++){
            nums[i] = ((nums[i]) * (nums[i]));
        }
        sort(nums.begin(), nums.end());
        return nums;
}
vector<int> secondsol(vector<int> nums){
    int i =0;
        int j = nums.size()-1;
        while( i != j){
            int a = nums[i] * nums[i];
            int b = nums[j] * nums[j];
            if(a < b){
                nums[j] = b;
                j--;  
            }
            else{
                nums[i] = a;
                
                swap(nums[i], nums[j]);
                j--;
            }
        }
        nums[i] = nums[i] * nums[i];
        return nums;
}
int main(){
    srand(time(NULL));
    int count = 1;
    while(count <= 100){
        int n = rand() % (10);
        vector<int> nums;
        for(int i = 0; i<n; i++){
            nums[i] = rand() %  (10);
        }
        vector<int> correctans = brutesol(nums);
        vector<int> myans = secondsol(nums);
        if(correctans != myans){
            cout<<n<<endl;
            for(int i =0; i<n; i++){
                cout<<nums[i]<<" ";
            }
            cout<<endl;
            break;
        } 
        count++;
    }

}