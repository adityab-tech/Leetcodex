class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum =0,x=1;
        for(int i:nums){
            sum+=i*x;
            x*=-1;
        }
        return sum;
    }
};