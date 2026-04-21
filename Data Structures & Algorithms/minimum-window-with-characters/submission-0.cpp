class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size() > s.size()) return "";
        vector<int>freqT(128, 0);
        int tCount = 0;
        for (auto& ch : t) {
            if(freqT[ch] == 0){
                tCount++;
            }
            freqT[ch]++;
        }
        vector<int>freqWin(128, 0);
        int l = 0;
        pair<int, int> res = {-1, -1};
        int winSize = INT_MAX;
        int matchCount = 0;
        for (int r = 0; r < s.size(); r++) {
            freqWin[s[r]]++;
            if(freqWin[s[r]] == freqT[s[r]]){
                matchCount++;
            }
            if((r - l + 1) < t.size()) continue;
            if(matchCount == tCount){
                while(freqWin[s[l]] - 1 >= freqT[s[l]]){
                    freqWin[s[l]]--;
                    l++;
                }
                if(r - l + 1 < winSize){
                    winSize = r - l + 1;
                    res = {l, r};
                }
                matchCount--;
                freqWin[s[l]]--;
                l++;
            }
        }
        return (winSize == INT_MAX)? "" : s.substr(res.first, (res.second - res.first + 1));
    }
};
