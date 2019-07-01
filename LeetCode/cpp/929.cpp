class Solution {
public:
    int numUniqueEmails(vector<string> &emails) {
        unordered_set<string> email_set;
        for (auto email:emails) {
            int i = 0;
            while (i < email.size()) {
                if (email[i] == '.')
                    email.erase(email.begin() + i);
                else if (email[i] == '+') {
                    unsigned long iter = email.find('@');
                    email.erase(email.begin() + i, email.begin() + iter);
                    break;
                } else
                    ++i;
            }
            email_set.insert(email);
        }
        return email_set.size();
    }
};
