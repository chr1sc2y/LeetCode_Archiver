class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0, j = 0, name_size = name.size(), typed_size = typed.size();
        while (i < name_size && j < typed_size) {
            if (name[i] == typed[j]) {
                ++i;
                ++j;
            } else
                ++j;
        }
        if (i == name_size)
            return true;
        return false;
    }
};