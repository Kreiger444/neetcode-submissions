class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int area=0;
        int left=0;
        int right=n-1;
        while(left<right){
            area=max(area, (right-left)*(min(heights[left], heights[right])));
            if(heights[left]<heights[right]){
                left++;
            }
            else{right--;}
        }
        return area;
    }
};
