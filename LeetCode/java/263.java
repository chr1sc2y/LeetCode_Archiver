class Solution {
    public boolean isUgly(int num) {
        if (num == 1)
            return true;
        while (true) {
            if (num == 2 || num == 3 || num == 5)
                return true;
            int ori = num;
            if (ori % 2 == 0)
                ori /= 2;
            else if (ori % 3 == 0)
                ori /= 3;
            else if (ori % 5 == 0)
                ori /= 5;
            if (ori == num)
                return false;
            num = ori;
        }
    }
}