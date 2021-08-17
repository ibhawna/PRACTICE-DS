uint32_t rev = 0;
        for(int  i = 31; i >= 0; i--){
            rev |= ( (n&1) << i);
            n = n >> 1;
            
        }
        return rev;
        


for(int i = 0; i<32; i++){
       rev = rev << 1;
       rev |= (n & 1);
       n = n>>1;
   }
   return rev;