class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int n = s.size();
        int i = 0;

        while (i < n) {
            string word = "";

            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            reverse(word.begin(), word.end());
            ans += word;

            if (i < n) {
                ans += ' ';
                i++;
            }
        }

        return ans;
    }
};