class RLEIterator {
public:
    RLEIterator(vector<int> A) {
        this->A = A;
    }

    int next(int n) {
        int i = 0;
        while (i < A.size()) {
            if (A[i] >= n) {
                A[i] -= n;
                return A[i + 1];
            } else {
                n -= A[i];
                A.erase(A.begin());
                A.erase(A.begin());
            }
        }
        return -1;
    }

private:
    vector<int> A;
};