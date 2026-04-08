class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double n = nums.size(), t=0, res;

        for(int i=0; i<k; i++) t += nums[i];
        res = t/k;

        for(int i=k; i<n; i++) {
            t += nums[i] - nums[i-k];
            res = max(res, t/k);
        }

        return res;
    }
};