class Solution {
public:
    long long sumAndMultiply(int n) {

        string s = to_string(n);
        string ans;

        for (char c : s) {
            if (c != '0')
                ans.push_back(c);
        }

        if (ans.empty())
            return 0;

        long long sum = 0;
        for (char c : ans) {
            sum += c - '0';
        }

        long long x = stoll(ans);

        return x * sum;
    }
};