class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = s.length();
        int m = p.length();

        if (m > n) return ans;

        string target = p;
        sort(target.begin(), target.end());

        for (int i = 0; i <= n - m; i++) {
            string temp = s.substr(i, m);

            sort(temp.begin(), temp.end());

            if (temp == target)
                ans.push_back(i);
        }

        return ans;
    }
};