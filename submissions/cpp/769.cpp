class Solution {
public:
    int maxChunksToSorted(vector<int> &arr) {
        int maxChunk = 0, til = 0;
        for (int i = 0; i < arr.size(); ++i) {
            til = max(til, arr[i]);
            if (til == i)
                ++maxChunk;
        }
        return maxChunk;
    }
};
