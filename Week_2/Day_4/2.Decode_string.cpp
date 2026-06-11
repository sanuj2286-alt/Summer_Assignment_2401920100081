class Solution {
public:
    string decode(string& s, int& i) {
        string result = "";
        int n = s.size();

        while (i < n && s[i] != ']') {
            if (isalpha(s[i])) {
                result += s[i];
                i++;
            } 
            else {
                int num = 0;

                while (i < n && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }

                i++; // skip '['

                string temp = decode(s, i);

                i++; // skip ']'

                while (num--) {
                    result += temp;
                }
            }
        }

        return result;
    }

    string decodeString(string s) {
        int i = 0;
        return decode(s, i);
    }
};