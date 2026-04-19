class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string second;
        for(int i=0; i<n; i++){
            if(isalnum(s[i])){
                second+=tolower(s[i]);
            }
            else continue;
        }
        int left=0;
        int right=second.size()-1;
        bool res=true;
        while(left<=right){
            if(second[left]==second[right]){
                left++;
                right--;
                continue;
            }
            else{
                res=false;
                break;
            }
        }
        return res;
    }
};
