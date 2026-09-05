class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> maxim(n), minum(n);
        int maxi= nums[0], mini = nums[n-1];
        for(int i=n-1;i>=0;i--){
            if (nums[i]<mini){
                mini=nums[i] ;
            }
            minum[i]=mini;
        }
        for (int i=0; i<n; i++) {
            if (nums[i]>maxi){
                maxi=nums[i];
            }
            maxim[i]=maxi;
        }
        for(int i=0; i<n; i++){
            if(maxim[i]-minum[i]<=k){
                return i;
            }
        }
        return -1;
    }
};