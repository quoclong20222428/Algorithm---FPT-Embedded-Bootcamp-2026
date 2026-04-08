class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0, res = 0;
        string tmp;
        for(auto x:s) {
            if(tmp.find(x) == string::npos) {
                count++;
            }
            else {
                int l = (int)tmp.length();
                res = max(res, l);
                tmp = tmp.erase(0, tmp.find(x) + 1);
                count = l + 1;
            }
            tmp += x;
        }
        res = max(res, (int)tmp.length());
        return res;
    }
};