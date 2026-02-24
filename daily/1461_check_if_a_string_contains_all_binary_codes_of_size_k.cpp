class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int cnt = 1 << k;
        if (s.size() < k + cnt - 1) return false;
        unordered_set<string> subs;
        for (int i = 0; i + k <= s.size(); i++) {
            subs.insert(s.substr(i, k));
        }
        return subs.size() == cnt;
    }
};