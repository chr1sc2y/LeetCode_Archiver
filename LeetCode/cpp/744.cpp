class Solution {
public:
    char nextGreatestLetter(vector<char> &letters, char target) {
        int size = letters.size();
        if (target >= letters.back())
            return letters[0];
        int i = 0, j = size - 1;
        while (i <= j) {
            int index = (j + i) / 2;
            if (letters[index] > target)
                j = index - 1;
            else if (letters[index] <= target)
                i = index + 1;
        }
        return letters[i];
    }
};