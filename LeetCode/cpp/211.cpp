class WordDictionary {
public:    
    WordDictionary() {
        
    }
        
    void addWord(string word) {
        int n = word.size();
        m[n].insert(word);
    }
    
    bool search(string word) {
        int n = word.size();
        if(word.find_first_of('.') != string::npos) {            
            for(auto e: m[n]) {
                int isFind = 1;
                for(int i = 0; i < n; ++i) {
                    if(word[i] != '.' && word[i] != e[i])                    
                        isFind = 0;
                }                
                if(isFind == 1)
                    return true;
            }
            return false;
        } else 
            return m[n].count(word);
    }
    map<int, unordered_set<string>> m;
};