class Solution {
   public:
    bool isValid(string s) {
        bool ans = true;
        stack<char> stk;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '[' || s[i] == '(' || s[i] == '{') {
                stk.push(s[i]);
            } else if (s[i] == ']' && !stk.empty() && stk.top() == '[') {
                stk.pop();
            } else if (s[i] == '}' && !stk.empty() && stk.top() == '{') {
                stk.pop();
            } else if (s[i] == ')' && !stk.empty() && stk.top() == '(') {
                stk.pop();
            } else {
                ans = false;
                break;
            }
        }
        if (!stk.empty()) {
            ans = false;
        }
        return ans;
    }
};
