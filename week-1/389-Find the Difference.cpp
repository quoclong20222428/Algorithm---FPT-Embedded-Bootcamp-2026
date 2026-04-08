class Solution {
public:
    char findTheDifference(string s, string t) {
        int res = 0;
        s += t;
        for(auto x:s) {
            res ^= x;
        }
        return res;
    }
};