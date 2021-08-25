// 1. brute force\
//already sorted in individually
//taking extra space and o(n1+n2) - tc

make an arr3 of size n+m, then insert all elements from arr1 and arr2 to it. sort the arrays - this is the simplest non - optimal solution.

 or

 arr1, n1
 arr2, n2
 int i =0, j=0, k=0;
 while(i < n1 && j <n2){
     if(arr1[i] < arr2[j]){
         arr3[k] = arr2[i];
         k++;
         i++;
     }
     else{
         arr3[k++] = arr2[j++];
     }


 }
 while(i<n1){
     arr3[k++] = arr1[i++];
 }
 while(j<n2){
     arr3[k++] = arr2[j++];
 }

 // MERGE TWO SORTED ARRAYS WITH O(1) EXTRA SPACE
 using insertion .
 one pointer at a1[0] and other at a2[0]
 if(a[i] > a[j]) swap( these two ) and i++ and if(a2[i] > a2[i-1], swap so they remain sorted ) and continue this process 

 // GAP METHOD (using basics of SHELL SORT)