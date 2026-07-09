class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1,area=0;
        while(left<right){
            int carea=min(height[left],height[right])*(right-left);
            area=max(carea,area);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return area;
    }
};