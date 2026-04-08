class Solution {
public:
    string removeDuplicates(string s, int k) {
        int j=0, n=s.length();
        vector<int> count(n);

        for(int i=0; i<n; ++j, i++) {
            s[j] = s[i];
            count[j] = (j>0 && s[i] == s[j-1]) ? count[j-1] + 1 : 1;
            if(count[j] == k) j-=k;
        }
        return s.substr(0,j);
    }
};