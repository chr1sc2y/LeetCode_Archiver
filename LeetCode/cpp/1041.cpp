class Solution {
    int n;
    int dir, x, y;
public:
    bool isRobotBounded(string instructions) {
        dir = 0, x = 0, y = 0;
        n = instructions.size();
        for (int i = 0; i < 4; ++i) {
            Process(instructions);
            if (x == 0 && y == 0)
                return true;
        }
        return false;
    }

    void Process(string &instructions) {
        for (int i = 0; i < n; ++i) {
            if (instructions[i] == 'L')
                dir = dir == 3 ? 0 : dir + 1;
            else if (instructions[i] == 'R')
                dir = dir == 0 ? 3 : dir - 1;
            else {
                if (dir == 0 || dir == 2)
                    y += (dir - 1) * -1;
                else
                    x += dir - 2;
            }
        }
    }
};
