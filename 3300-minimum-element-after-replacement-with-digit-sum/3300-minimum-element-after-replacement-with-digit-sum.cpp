class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int an = INT_MAX;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            while (nums[i] > 0) {
                int rem = nums[i] % 10;
                nums[i] /= 10;
                sum += rem;
            }
            an = min(sum, an);
        }
        return an;
    }
};