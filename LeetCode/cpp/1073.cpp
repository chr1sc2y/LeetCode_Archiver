class Solution {
public:
    vector<int> addNegabinary(vector<int> &arr1, vector<int> &arr2) {
        int m = arr1.size() - 1, n = arr2.size() - 1;
        if (m < n)
            return addNegabinary(arr2, arr1);
        int temp = 0, res = 0;
        while (m >= 0) {
            temp = arr1[m] + res;
            if (n >= 0)
                temp += arr2[n];
            if (temp == 2) {
                temp = 0;
                res = -1;
            } else
                res = 0;
            arr1[m] = temp;
            --m;
            if (n >= 0)
                --n;
        }
        if (res == -1)
            arr1.insert(arr1.begin(), res);
        m = arr1.size() - 1;
        while (m >= 0) {
            if (arr1[m] == -1) {
                arr1[m] = 1;
                if (m - 1 >= 0)
                    arr1[m - 1] += 1;
                else
                    arr1.insert(arr1.begin(), 1);
            } else if (arr1[m] == 2) {
                arr1[m] = 0;
                if (m - 1 >= 0)
                    arr1[m - 1] -= 1;
                else {
                    arr1.insert(arr1.begin(), 1);
                    arr1.insert(arr1.begin(), 1);
                }
            }
            --m;
        }
        while (arr1.size() > 1 && arr1.front() == 0)
            arr1.erase(arr1.begin());
        return arr1;
    }
};
