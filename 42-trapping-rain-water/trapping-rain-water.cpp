class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1;
        int lsize=0,rsize=0,ans=0;
        while(l<r){
            lsize=max(lsize,height[l]);
            rsize=max(rsize,height[r]);
            if(lsize<rsize){
                ans+=lsize-height[l];
                l++;
            }
            else{
                ans+=rsize-height[r];
                r--;
            }
        }
        return ans;
    }
};