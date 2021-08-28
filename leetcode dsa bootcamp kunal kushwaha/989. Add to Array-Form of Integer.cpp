// better
        for(int i = num.size()-1; i>=0 and k >0; i--){
            num[i] = num[i] + k;
            k = num[i]/10;
            num[i] = num[i] % 10;
        }
        while(k>0){
            num.insert(num.begin(), k%10);
            k = k/10;
        }
        
        return num;
        // intution
        // initially num[] = [1,2] and k = 198 
        // num[1] = num[1] + k = 196 + 2 = 200, then we will update k as num[i] / 10 and num[i] % 10 as num[2];
        // k = num[i] / 10; = 20
        // so now num[i] = num[i] % 10 = 0
        // repeat this process
        // if in the end , k =/= 0, then insert that carry in the begiinning of num[i]


// other method
        vector<int> ans;
        int carry = 0;
        int n = num.size()-1;
        while( n >= 0 || carry > 0 || k != 0){
            if( k!= 0){
                carry = carry + k%10;
                k = k/10;
            }
            if( n >= 0){
                carry = carry + num[n];
                n--;
            }
            ans.push_back(carry % 10);
            carry = carry / 10;
        }

        reverse(ans.begin(),ans.end());
        return ans;