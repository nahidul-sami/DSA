class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int n = words.size();
        for (int i = 0; i < n; i++) {
            int nn = words[i].size();
            bool found = false;

            for (int j = 0; j < nn; j++) {
                if (words[i][j] == x) {
                    found = true;
                    break;
                }
            }
            if(found)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};