class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>tmp;

        for(auto k:nums) {
            tmp.push_back(to_string(k));
        }

        sort(tmp.begin(), tmp.end(), [](string a, string b) {
            return a+b > b+a;
        });

        if(tmp[0] == "0") return "0";

        string res;

        for(auto str:tmp) {
            res += str;
        }
        return res;
    }
};