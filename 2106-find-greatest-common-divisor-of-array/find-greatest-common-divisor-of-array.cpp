class Solution {
public:
    int findGCD(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n=nums.size();
       int x=nums[0];
       int y=nums[n-1];
       for(int i=x;i>0;i--){
            if(y%i==0 && x%i==0){
                return i;
            }
        }
        return 1;
    }
};