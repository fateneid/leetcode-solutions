class Solution {
public:
    int binaryGap(int n) {
        if ((n & (n - 1)) == 0) return 0;
        string s = bitset<32>(n).to_string();
        int z = __builtin_clz(n);
        int prev = z, curr = 0, gap = 0;
        for (int i = z; i < s.size(); i++) {
            if (s[i] == '1') {
                curr = i;
                if (curr - prev > gap) gap = curr - prev;
                prev = curr;
            }
        }
        return gap;
    }
};