class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>rn, mg;

        for(auto c:ransomNote) rn[c]++;
        for(auto c:magazine) mg[c]++;

        for(auto m:rn) {
            if(mg[m.first] < m.second) return false;
        }

        return true;
    }
};