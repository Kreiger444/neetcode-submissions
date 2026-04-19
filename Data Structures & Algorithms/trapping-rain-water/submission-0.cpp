class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int sum=0;

        int leftmax=0;
        int rightmax=0;

        while(left<right){
            if(height[left]<height[right]){
                leftmax=max(leftmax,height[left]);
                sum+=leftmax-height[left];
                left++;
            }else{
                rightmax=max(rightmax,height[right]);
                sum+=rightmax-height[right];
                right--;
            }
        }
        return sum;
        
    }
};