class Solution {
public:
    int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int mm = INT_MAX;
        int ma = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (nums[i] < mm) {
                mm = nums[i];
            }  if (nums[i] > ma) {
                ma = nums[i];
            }
        }
        return gcd(mm, ma);
    }
};