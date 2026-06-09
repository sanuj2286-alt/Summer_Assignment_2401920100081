class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();

        if (n > m) return false;

        string target = s1;
        sort(target.begin(), target.end());

        for (int i = 0; i <= m - n; i++) {
            string temp = s2.substr(i, n);

            sort(temp.begin(), temp.end());

            if (temp == target)
                return true;
        }

        return false;
    }
};