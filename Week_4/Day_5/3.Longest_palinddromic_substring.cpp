class Solution {
public:
    string s;

    int expand(int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }

        return right - left - 1; // length of palindrome
    }

    string longestPalindrome(string str) {
        s = str;

        int start = 0;
        int end = 0;

        for (int i = 0; i < s.size(); i++) {

            // Odd length palindrome
            int len1 = expand(i, i);

            // Even length palindrome
            int len2 = expand(i, i + 1);

            int len = max(len1, len2);

            if (len > end - start + 1) {
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }

        return s.substr(start, end - start + 1);
    }
};