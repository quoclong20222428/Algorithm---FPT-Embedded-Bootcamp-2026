class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a[3] = {0};
        int idx = 0, n = nums.size(), i = 0;
        if(n == 1) return;
        for(auto x:nums) a[x]++;
        while(i < n) {
            while(a[idx] != 0) {
                nums[i] = idx; i++;
                a[idx]--;
            }
            idx++;
        }
    }
};