class Solution {
public:
    int totalFruit(vector<int> &tree) {
        time_t begin = clock();
        int size = tree.size();
        int total = 0;
        for (int i = 0; i < size; ++i) {
            if (i > 0 && tree[i] == tree[i - 1])
                continue;
            int a = tree[i], b = -1;
            int current = 1, j = i + 1;
            for (; j < size; ++j) {
                if (b != -1 && (tree[j] != a && tree[j] != b))
                    break;
                if (b == -1 && tree[j] != a)
                    b = tree[j];
                ++current;
            }
            total = max(total, current);
            if (j == size)
                break;
        }
        time_t end = clock();
        cout << end - begin << endl;
        return total;
    }
};