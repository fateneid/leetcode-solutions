class Solution {
public:
    int numSteps(string s) {
        int count = 0, i;
        while (s.size() > 1) {
            if (s.back() == '0')
                s.pop_back();
            else {
                i = s.size() - 1;
                while (i >= 0 && s[i] == '1') {
                    s[i] = '0';
                    i--;
                }
                if (i >= 0) s[i] = '1';
                else s = '1' + s;
            }
            count++;
        }
        return count;
    }
};

// another sol

class Solution {
public:
    int numSteps(string s) {
        int zeros = 1, ones = 0, len = s.size();
        for (int i = len - 1; i >= 0; i--) {
            if (s[i] == '1') ones++;
            if (ones > 0 && s[i] == '0') zeros++;
        }
        return ones == 1 ? len - 1 : zeros + len;
    }
};