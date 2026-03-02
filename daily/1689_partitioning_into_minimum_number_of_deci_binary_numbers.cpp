// (11 ms Beats 5.73%)
class Solution {
public:
    int minPartitions(string n) {
        return *max_element(n.begin(), n.end()) - '0';
    }
};

// another sol (3 ms Beats 41.51%)
class Solution {
public:
    int minPartitions(string n) {
        int mx = 0;
        for (int i = 0; i < n.size(); i++) {
            int d = n[i] - '0';
            if (d == 9) return 9;
            mx = max(mx, d);
        }
        return mx;
    }
};

// another sol  (0 ms Beats 100.00%)
class Solution {
public:
    int minPartitions(string n) {
        int mx = 0;
        for (char& ch : n) {
            int d = ch - '0';
            if (d == 9) return 9;
            mx = max(mx, d);
        }
        return mx;
    }
};