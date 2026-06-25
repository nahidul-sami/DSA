class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        int ans1 = 0;
        int temp=sum;
        while (temp % k != 0) {
            temp--;
            ans1++;
        }
       return ans1;
    }
};