class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = nums.size(), n = nums.size();

        for(int i=0; i < n; i++) {
            ans += i - nums[i];
        }

        return ans;
    }
};