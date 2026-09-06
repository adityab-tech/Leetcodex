class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n=nums.size();
        long long tsum=0,sum=0,ans=0;
        for(int x:nums){
            tsum+=x;
        }
        for(int i=0;i<n/2;i++){
            sum+=nums[i];
        }
        for(int i=0;i<n;i++){
            if(2*sum>tsum){
                ans++;
            }
            sum-=nums[i];
            sum+=nums[(n/2+i)%n];
        }
        return ans;
    }
};