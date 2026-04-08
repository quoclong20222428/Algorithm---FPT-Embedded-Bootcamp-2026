class Solution {
public:
    string makeGood(string s) {
        stack<char>st;

        st.push(s[0]);

        int n = s.length();
        for(int i=1; i<n; i++) {
            if(!st.empty() && abs(st.top() - s[i]) == 32) st.pop();
            else st.push(s[i]);
        }

        string res;
        while(!st.empty()) {
            res = st.top() + res;
            st.pop();
        }

        return res;
    }
};