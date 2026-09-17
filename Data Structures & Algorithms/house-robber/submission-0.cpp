#include <vector>
#include <cstring>
#include <algorithm>
class Solution {
   public:
    int t[101];
    int n;
    int solve(vector<int>& nums, int idx) {
        if (idx >= n) return 0;
        if (t[idx] != -1) return t[idx];
        int steal = nums[idx] + solve(nums, idx + 2);
        int skip = solve(nums, idx + 1);
        return t[idx] = max(steal, skip);
    }
    int rob(vector<int>& nums) {
        n = nums.size();
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);
        memset(t, -1, sizeof(t));
        return solve(nums, 0);
    }
};
