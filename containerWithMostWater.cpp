class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0, right= height.size()-1, maxi=0;
        int area=0, mxArea=0;;
        while(left < right){
            int w= abs(left-right);
            int h=min(height[left], height[right]);
            area= w * h;
            mxArea= max(mxArea, area);
            if(height[left] < height[right]) left++;
            else if(height[left] > height[right]) right--;
            else{
                left++;
                right--;
            }
        }
        return mxArea;
    }
};