class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int a,b,c;
        a = b = c = nums[0];
        for(auto x:nums) {
            if(a > x) {
                c = b; b = a; a = x;
            }
            if(b != c) break;
        }
        return (b != c) ? a : c;
    }
};