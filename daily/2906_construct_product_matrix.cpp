class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        const int mod = 12345, n = grid.size(), m = grid[0].size();
        long long suf = 1, pref = 1;
        vector<vector<int>> p(n, vector<int>(m));

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                p[i][j] = suf;
                suf = suf * grid[i][j] % mod;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                p[i][j] = p[i][j] * pref % mod;
                pref = pref * grid[i][j] % mod;
            }
        }

        return p;
    }
};