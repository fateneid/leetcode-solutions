class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int ma = max(word1.length(), word2.length());
        string word = "";
        for (int i = 0; i < ma; i++) {
            if (i < word1.length()) word += word1[i];
            if (i < word2.length()) word += word2[i];
        }
        return word;
    }
};