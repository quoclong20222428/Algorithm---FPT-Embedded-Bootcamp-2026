class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>>m;

        for(auto s:strs) {
            string tmp = s;
            sort(tmp.begin(), tmp.end());
            m[tmp].push_back(s);
        }

        vector<vector<string>> res;
        for(auto k:m) res.push_back(k.second);

        return res;
    }
};