class Solution {
public:
    bool solve(int idx, string &s, int n, unordered_set<string> &st, int t[]) {
        if (idx == n)
            return true;

        if (t[idx] != -1)
            return t[idx];

        for (int l = idx; l < n; l++) {
            string temp = s.substr(idx, l - idx + 1);

            if (st.find(temp) != st.end() && solve(l + 1, s, n, st, t)) {
                return t[idx] = true;
            }
        }

        return t[idx] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st(wordDict.begin(), wordDict.end());

        int t[301];
        memset(t, -1, sizeof(t));

        return solve(0, s, s.length(), st, t);
    }
};