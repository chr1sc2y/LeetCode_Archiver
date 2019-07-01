class Solution {
public:
    int findRadius(vector<int> &H, vector<int> &T) {
        int size = H.size(), size_heaters = T.size();
        if (size == 0 || size_heaters == 0)
            return 0;
        sort(H.begin(), H.end());
        sort(T.begin(), T.end());
        vector<int> radius(size, -1);
        for (int h = 0, t = 0; h < size && t < size_heaters;) {
            if (T[t] < H[h])
                ++t;
            else {
                radius[h] = T[t] - H[h];
                ++h;
            }
        }
        for (int h = size - 1, t = size_heaters - 1; h >= 0 && t >= 0;) {
            if (T[t] > H[h])
                --t;
            else {
                radius[h] = radius[h] == -1 ? H[h] - T[t] : min(radius[h], H[h] - T[t]);
                --h;
            }
        }
        return *max_element(radius.begin(), radius.end());
    }
};