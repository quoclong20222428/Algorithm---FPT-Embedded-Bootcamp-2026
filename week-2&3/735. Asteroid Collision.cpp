class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>ast;
        ast.push(asteroids[0]);
        int n = asteroids.size();

        for(int i=1; i<n; i++) {
            int tmp = asteroids[i];
            while(!ast.empty() && ast.top() * tmp <= 0 && tmp <= 0) {
                int ast2 = ast.top(); ast.pop();
                if(abs(ast2) > abs(tmp)) tmp = ast2;
                else if(ast2 + tmp == 0) tmp = 0;
            }
            ast.push(tmp);
        }

        vector<int>res;
        while(!ast.empty()) {
            if(ast.top() != 0) res.push_back(ast.top());
            ast.pop();
        }

        reverse(res.begin(), res.end());
        return res;
    }
};