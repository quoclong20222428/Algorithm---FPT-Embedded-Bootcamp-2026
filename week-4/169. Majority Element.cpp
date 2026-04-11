class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        int x = nums.size()/2;

        for(auto k:nums) {
            m[k]++;
            if(m[k] > x) return k;
        }

        return 0;
    }
};