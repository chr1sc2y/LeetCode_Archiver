class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> ret;
        for (int i = 0; i <= num; ++i) {
            int hour = i, min = num - i;
            vector<int> h;
            vector<int> m;
            calcHour(hour, h);
            vector<int> occ(6, 0);
            calcMin(min, m, occ, 0, -1);
            sort(h.begin(),h.end());
            sort(m.begin(),m.end());
            for (int j = 0; j < h.size(); ++j) {
                string temp;
                for (int k = 0; k < m.size(); ++k) {
                    if(m[k] >= 60)
                        continue;
                    temp = to_string(h[j]) + ":";
                    temp += (m[k] < 10 ? "0" + to_string(m[k]) : to_string(m[k]));
                    ret.push_back(temp);
                }
            }
        }
        return ret;
    }

    void calcHour(int hour, vector<int> &h) {
        if (hour == 3) {
            h.push_back(11);
            h.push_back(7);
        } else if (hour == 2) {
            h.push_back(9);
            h.push_back(10);
            h.push_back(6);
            h.push_back(5);
            h.push_back(3);
        } else if (hour == 1) {
            h.push_back(1);
            h.push_back(2);
            h.push_back(4);
            h.push_back(8);
        } else if (hour == 0)
            h.push_back(0);
    }

    void calcMin(int min, vector<int> &m, vector<int> &occ, int minute,int pre) {
        if (min == 0) {
            m.push_back(minute);
            return;
        }
        for (int i = pre + 1; i < 6; ++i) {
            if (occ[i] == 0) {
                occ[i] = 1;
                minute += pow(2, i);
                calcMin(min - 1, m, occ, minute,i);
                minute -= pow(2, i);
                occ[i] = 0;
            }
        }
    }
};