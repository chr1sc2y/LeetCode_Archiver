class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        int total = 0;
        for(int i = L; i <= R; ++i) {
            int bitNum = calcBit(i);
            if(isPrime(bitNum))
                ++total;
        }
        return total;
    }
    
    int calcBit(int i) {
        if(i == 0) return 0;
        else if(i == 1) return 1;
        return calcBit(i >> 1) + (i & 1);
    }
    
    bool isPrime(int bitNum) {
        if (bitNum == 0 || bitNum == 1)
            return false;
        for(int j = 2; j < bitNum; ++j)
            if(bitNum % j == 0)
                return false;
        return true;
    }
};