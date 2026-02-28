class Solution {
public:
    int minOperations(string s, int k) {
        long long n = s.size(), z, o;
        z = count(s.begin(), s.end(), '0');
        o = n - z;
        if (z == 0) return 0;
        if (o == 0 && z % k == 0) return (z / k);
        for (int r = 1; r <= n; r++) {
            int flips = r * k;
            if ((flips - z) % 2 || flips < z) continue;
            if (r % 2 != 0)
            {
                if (flips <= z * r + o * (r - 1)) return r;
            }
            else {
                if (flips <= z * (r - 1) + o * r) return r;
            }
        }
        return -1;
    }
};