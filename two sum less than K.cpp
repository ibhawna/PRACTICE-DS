first -> brute force
arr = [34, 23,1,24,75,53,54,8] 
k = 60
find max sum possible = 58
 two -pointer approach :
 int maxsum = INT_MIN;
 int i = 0 ; 
 int j = nums.sizE()-1;
 while(i<j){
     if(a[i] + a[j] < k){
         maxsum = max(maxsum, a[i] + a[j]);
         i++;
     }
     else{
         j--;
     }
 }
 return maxsum;
