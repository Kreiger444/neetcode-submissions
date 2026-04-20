class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    int n = s1.size();
    sort(s1.begin(), s1.end());
    for (int i = 0, j = i + n - 1; j < s2.size(); i++, j++)
    {
        string window = s2.substr(i, n);
        sort(window.begin(), window.end());
        if (s1 == window){
            return true;
        }
    }
    return false;
}
};
