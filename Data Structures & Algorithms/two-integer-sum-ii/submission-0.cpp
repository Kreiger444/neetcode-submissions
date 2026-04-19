class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int left=0;
        int right=numbers.size()-1;
        int temp;
        while(left<=right){
            temp=numbers[left]+numbers[right];
            if(temp==target){
                break;
            }
            else if(temp>target){
                right--;
            }
            else{
                left++;
            }
        }
        res.push_back(left+1);
        res.push_back(right+1);
        return res;
    }
};
