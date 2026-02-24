// (slower)

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         string s1, s2;
//         s1 = to_string(x);
//         s2 = s1;
//         reverse(s2.begin(), s2.end());
//         return s1 == s2;
//     }
// };

// another sol (faster)

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int original = x;
        long long rev = 0;
        while (x > 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return original == rev;
    }
};


