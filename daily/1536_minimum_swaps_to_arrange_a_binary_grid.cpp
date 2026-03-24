class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size(), swaps = 0;
        vector<int> Zeros(n);
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = n - 1; j >= 0 && grid[i][j] == 0; j--) cnt++;
            Zeros[i] = cnt;
        }
        for (int i = 0; i < n; i++) {
            int needed = n - i - 1, j = i;
            while (j < n && Zeros[j] < needed) j++;
            if (j == n) return -1;
            while (j > i) {
                swap(Zeros[j], Zeros[j - 1]);
                swaps++;
                j--;
            }
        }
        return swaps;
    }
};