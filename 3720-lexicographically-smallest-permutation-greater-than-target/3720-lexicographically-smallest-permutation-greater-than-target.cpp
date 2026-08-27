class Solution {
public:
    vector<int> freq;
    int n;

    string dfs(int pos, bool greater, string &target) {

        // Saari positions fill ho gayi
        if (pos == n) {
            return greater ? "" : "#";
        }

        // Agar pehle hi greater ho chuke hain,
        // to baaki smallest order me bhar do
        if (greater) {
            string res = "";

            for (int i = 0; i < 26; i++) {
                while (freq[i] > 0) {
                    res += char('a' + i);
                    freq[i]--;
                }
            }

            return res;
        }

        int t = target[pos] - 'a';

        // 1. Equal character try karo
        if (freq[t] > 0) {

            freq[t]--;

            string suffix = dfs(pos + 1, false, target);

            if (suffix != "#")
                return char('a' + t) + suffix;

            freq[t]++; // backtrack
        }

        // 2. Target se bada smallest character try karo
        for (int ch = t + 1; ch < 26; ch++) {

            if (freq[ch] > 0) {

                freq[ch]--;

                string suffix = dfs(pos + 1, true, target);

                if (suffix != "#")
                    return char('a' + ch) + suffix;

                freq[ch]++; // backtrack
            }
        }

        return "#";
    }

    string lexGreaterPermutation(string s, string target) {

        n = s.size();
        freq.assign(26, 0);

        for (char c : s)
            freq[c - 'a']++;

        string ans = dfs(0, false, target);

        return (ans == "#") ? "" : ans;
    }
};