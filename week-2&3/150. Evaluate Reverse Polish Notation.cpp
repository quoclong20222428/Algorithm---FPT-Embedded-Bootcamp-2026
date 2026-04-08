class Solution {
public:
    bool isOperator(string s) {
        return s == "+" || s == "-" || s == "*" || s == "/";
    }

    int cal(int a, int b, string o) {
        if (o == "+")
            return a + b;
        if (o == "-")
            return a - b;
        if (o == "*")
            return a * b;
        if (o == "/") {
            return a / b;
        }
        return 0;
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (auto x : tokens) {
            if (isOperator(x)) {
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                a = cal(b,a,x);
                st.push(a);
            }
            else st.push(stoi(x));
        }

        return st.top();
    }
};