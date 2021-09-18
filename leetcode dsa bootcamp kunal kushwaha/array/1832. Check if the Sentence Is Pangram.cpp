// using hashmap
bool checkIfPangram(string sentence) {
        int hashmap[123] = {0};
        bool ans = false;
        if(sentence.length() < 26){
            return false;
        }
        for(int i = 0; i<sentence.length(); i++){
            hashmap[sentence[i]]++;
        }
        for(int i = 97; i<123; i++){
            if(hashmap[i] == 0){
                ans = false;
                break;
            }
            else{
                ans = true;
            }
        }
        return ans;

        

    }


    // using set
    if(sentence.length() < 26){
            return false;
        }
    set<int> s;
        for(auto i : sentence){
            s.insert(i);
        }
        
        return s.size() == 26;