// 1.
int numIdenticalPairs(vector<int>& A) {
        int res = 0;
        unordered_map<int, int> count;
        for (int a: A) {
            res += count[a]++;
        }
        return res;
    }

    int numIdenticalPairs(vector<int>& A) {
        return accumulate(A.begin(), A.end(), 0, [count = unordered_map<int, int> {}] (auto a, auto b) mutable {
            return a + count[b]++;
        });
    }