vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i =1; i < arr.size(); i++){
            arr[i] = arr[i] ^ arr[i-1];
        } //prefix xor sum
        for(int i = 0; i< queries.size(); i++){
            int n = queries[i][0];
            int m = queries[i][1];
            if( n  == 0){
                ans.push_back(arr[m]);
            }
            else{
                ans.push_back(arr[n -1]  ^ arr[m] );
            }  
            // using L-R RANGE  XOR PROPERTY
        }
        return ans;
        
    }