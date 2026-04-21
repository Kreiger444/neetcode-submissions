class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        map<string, function<int(int, int)>> ops;

        ops["+"] = [](int a, int b) { return a + b; };
        ops["-"] = [](int a, int b) { return a - b; };
        ops["*"] = [](int a, int b) { return a * b; };
        ops["/"] = [](int a, int b) { return a / b; };

        stack<int> st;

        for (auto s : tokens) {
            if (s != "+" && s != "-" && s != "*" && s != "/") {
                st.push(stoi(s));
            } else {
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();

                st.push(ops[s](b, a));
            }
        }

        return st.top();
    }
};
