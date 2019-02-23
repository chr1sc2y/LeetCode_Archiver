class Solution {
public:
    string simplifyPath(string path) {
        stack<string> s, t;
        string p;
        for (int i = 0; i <= path.size(); ++i) {
            if (path[i] == '/' || i == path.size()) {
                if (p == "..") {
                    if (!s.empty())
                        s.pop();
                } else if (!p.empty() && p != ".")
                    s.push(p);
                p.clear();
            } else
                p += path[i];
        }
        string ret = "/";
        while (!s.empty()) {
            t.push(s.top());
            s.pop();
        }
        while (!t.empty()) {
            ret += t.top() + "/";
            t.pop();
        }
        if (ret.size() > 1)
            ret.pop_back();
        return ret;
    }
};