class Solution {
public:
    bool isAnagram(string s, string t) {
        quickSort(s, 0, s.size() - 1);
        quickSort(t, 0, t.size() - 1);
        return s == t;
    }

    void quickSort(string &s, int head, int tail) {
        int i = head, j = tail;
        if (i >= j) return;
        char std = s[i];
        while (i < j) {
            while (j > i && (int) s[j] >= (int) std)
                --j;
            if (j > i)
                s[i] = s[j];
            while (i < j && (int) s[i] <= (int) std)
                ++i;
            if (i < j)
                s[j] = s[i];
        }
        s[i] = std;
        quickSort(s, head, i - 1);
        quickSort(s, i + 1, tail);
    }
};