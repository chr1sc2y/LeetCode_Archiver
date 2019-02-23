class Solution {
public:
    string strWithout3a3b(int A, int B) {
        int n = A + B;
        string a = "a", b = "b";
        if (A < B) {
            swap(A, B);
            swap(a, b);
        }
        string ret;
        while (n > 0) {
            if (A >= B * 2) {
                ret += A > 1 ? (a + a) : A == 1 ? a : "";
                A -= A > 1 ? 2 : 1;
            } else {
                ret += A > 0 ? a : "";
                A -= A > 0 ? 1 : 0;
            }
            ret += B > 0 ? b : "";
            B -= B > 0 ? 1 : 0;
            n = A + B;
        }
        return ret;
    }
};

