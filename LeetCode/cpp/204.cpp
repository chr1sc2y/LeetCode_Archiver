class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2)
            return 0;
        int count = 1;
        vector<bool> isPrime(n, true);
        for(int i = 3; i < n; i += 2) {
            if(isPrime[i]) {
                ++count;
                if(i > sqrt(n))
                    continue;
                for(int j = i * i; j < n; j += 2 * i)
                    if(isPrime[j])
                        isPrime[j] = false;
            }
        }
        return count;
    }
};