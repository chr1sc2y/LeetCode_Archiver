class Solution {
public:
    vector<vector<string>> partition(string s) {
        int n = s.size();
        if (n == 0)
            return ret;
        vector<string> temp;
        BackTracking(s,n,0,temp);
        return ret;
    }

    void BackTracking(string s,int &n,int i,vector<string> &temp){
        if(i == n) {
            ret.push_back(temp);
            return;
        }
        for(int j =i ; j < n; ++j) {
            if(isPalindrome(i,j,s)) {
                temp.push_back(s.substr(i,j-i + 1));
                BackTracking(s,n,j+1,temp);
                temp.pop_back();
            }
        }
    }

    bool isPalindrome(int i, int j,string &s) {
        while(i <= j &&s[i] == s[j]) {
            ++i;
            --j;
        }
        if(i > j)
            return true;
        return false;
    }

private:
    vector<vector<string>> ret;
};