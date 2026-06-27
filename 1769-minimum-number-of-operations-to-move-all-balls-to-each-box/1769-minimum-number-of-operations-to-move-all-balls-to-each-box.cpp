class Solution {
public:
    vector<int> minOperations(string boxes) {
        int ANS = 0;
        vector<int> ans;
        int n = boxes.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (boxes[j] == '1') {
                    ANS += abs(i - j);
                }
            }
            ans.push_back(ANS);
            ANS = 0;
        }
        return ans;
    }
};