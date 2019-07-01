class RandomizedSet {
public:
    unordered_map<int, int> M;
    vector<int> V;

    /** Initialize your data structure here. */
    RandomizedSet() {
        M = unordered_map<int, int>();
        V = vector<int>();
    }

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if (M.find(val) != M.end())
            return false;
        V.push_back(val);
        M.insert(std::pair<int, int>(val, V.size() - 1));
        return true;
    }

    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if (M.find(val) == M.end())
            return false;
        int last = V.back();
        M[last] = M[val];
        V[M[last]] = last;
        V.pop_back();
        M.erase(val);
        return true;
    }

    /** Get a random element from the set. */
    int getRandom() {
        return V[rand() % V.size()];
    }
};
